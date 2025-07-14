find . -name "*.cs" | while read file; do
  # Get the relative path, remove './' and '.cs'
  rel_path="${file#./}"
  rel_path="${rel_path%.cs}"

  # Convert path to namespace (replace '/' with '.')
  ns_path=$(echo "$rel_path" | sed 's/\//./g')

  # Remove the root folder prefix (NeuWillow.)
  ns_path=$(echo "$ns_path" | sed 's/^NeuWillow\.//')

  # Final namespace
  namespace="namespace NeuWillow.$ns_path"

  # Replace the first namespace line in the file
  sed -i '' "0,/^namespace /s//${namespace}/" "$file"
done
