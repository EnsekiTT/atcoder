#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  int X;
  cin >> X;

  int digit_10;
  int digit_1;
  digit_10 = X/10;
  digit_1 = X%10;

  cout << digit_10 + digit_1 << endl;

  return 0;
}
