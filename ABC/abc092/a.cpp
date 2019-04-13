#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
  int A, B, C, D;
  cin >> A >> B >> C >> D;
  int price = 0;
  price += A > B ? B : A;
  price += C > D ? D : C;
  cout << price << endl;
  return 0;
}
