namespace NeuWillow.Neurons.Dendrites.DendriteIonChannels;

public enum DendriteGatedIonChannelType
{
    None,
    VoltageGated,
    LigandGated
}

public interface IDendriteIonChannel
{
    DendriteGatedIonChannelType GatedIonChannelType { get; }
}

