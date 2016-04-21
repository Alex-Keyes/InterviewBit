int Solution::strStr(const string &haystack, const string &needle) {
  // Do not write main() function.
  // Do not read input, instead use the arguments to the function.
  // Do not print the output, instead return values as specified
  if (needle.empty()) {
    return 0;
  }

  for (int i = 0; i + needle.length() < haystack.length() + 1; ++i) {
    if (haystack.substr(i, needle.length()) == needle) {
      return i;
    }
  }
  return -1;
}
