#include <iostream>

using namespace std;

int gcd(int a, int b)
{
  if (a < b)
    swap(a,b);
  if (b == 0)
    return a;

  return gcd(a%b, b);
}

int main()
{
  int a,b;
  cin >> a >> b;
  cout << "Greatest common divisor:" << gcd(a,b) << endl;
}
