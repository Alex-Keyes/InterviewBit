int lengthOfLastWord(const string &s) {
  int len = 0;
  while (*s) {
    if (*s != ' ') {
      len++;
      s++;
      continue;
    }
    s++;
    if (*s && *s != ' ') len = 0;
  }
  return len;

}
