using NeuWillow.Neurons.Neurotransmitters;
using NeuWillow.Neurons.Dendrites.DendriticSpines;
using NeuWillow.Neurons.Dendrites.DendriteIonChannels;

namespace NeuWillow.Tests;

public class DendriteTests
{
  [Fact]
  public void DendriticSpineDispatchesExcitatory_EPSP_IsTrue()
  {
    // Inhibitory
    Assert.True(DendriteSpineDispatches_EPSP_IsTrue(Neurotransmitter.Gaba));

    // Excitatory
    Assert.True(DendriteSpineDispatches_EPSP_IsTrue(Neurotransmitter.Glutamate)); 
  }

  private bool DendriteSpineDispatches_EPSP_IsTrue(Neurotransmitter neurotransmitter)
  {
    bool isEventFired = false;
    List<IDendriteIonChannel> ionChannels = new();
    DendriticSpine dendriticSpine = new DendriticSpine(ionChannels);
    dendriticSpine.OnDendriteSpinePotentialReceived += (s, e) =>
    {
      Assert.NotNull(s);
      Assert.NotNull(e.Trigger);
      Assert.True(e.Trigger.Excitability == neurotransmitter.Excitability);
      isEventFired = true;
    };

    for (int i = 0; i < 100000; i++)
    {
      dendriticSpine.Process(neurotransmitter);
      if (isEventFired)
        break;
    }

    return isEventFired;
  }
}