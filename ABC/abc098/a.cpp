#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
  int A, B;
  int ANS[3];
  cin >> A >> B;

  ANS[0] = A+B;
  ANS[1] = A-B;
  ANS[2] = A*B;

  cout << *max_element(ANS, ANS+3) << endl;

  return 0;
}
