namespace NeuWillow.Neurons.Axons;

public class Axon(decimal length, bool isMylenated)
{
    /// <summary>
    /// Length is expressed in millimeters.
    /// </summary>
    public decimal Length => length;
    
    public bool IsMylenated => isMylenated;
}