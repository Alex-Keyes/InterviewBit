class Solution {
public:
  bool isPower(int x) {
	if (x <= 1) return true;
	for (int base = 2; base < x && base < INT_MAX / base; base++) {
	  int temp = base;
	  while (temp <= x && temp < INT_MAX / base) {
		temp *= base;
		if (temp == x) return true;
	  }
	}
	return false;
  }
};
