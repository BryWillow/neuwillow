namespace NeuWillow.Common;

public static class Extensions
{
  public static T ThrowIfNull<T>(this T value, string parameterName, string? message) where T : class
  {
    if (value == null)
    {
      throw new ArgumentNullException(parameterName, message);
    }
    return value;
  }
}