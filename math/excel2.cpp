/*Given a positive integer, return its corresponding column title as appear in an Excel sheet.
 * EX: 1 -> A
 *     2 -> B
 *     3 -> C
 */

#include <iostream>

using namespace std;

string convertToTitle(int n)
{
  string ans;
  while(n){
    ans = char((n-1) % 26 + 'A') + ans;
    n = (n-1) / 26;
  }
  return ans;
}

int main()
{
  int n;
  cin >> n;
  cout << convertToTitle(n) << endl;
}
