#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  int a = x2-x1;
  int b = y2-y1;

  int x3, y3, x4, y4;

  x3 = x2-b;
  y3 = y2+a;
  x4 = x3-a;
  y4 = y3-b;

  cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
  return 0;
}
