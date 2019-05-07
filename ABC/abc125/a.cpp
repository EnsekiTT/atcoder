#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include <climits>
using namespace std;

int main()
{
  float A, B, T;
  cin >> A >> B >> T;

  cout << int((T+0.5) / A) * B << endl;

  return 0;
}
