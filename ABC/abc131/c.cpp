#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include <climits>
using namespace std;

int main()
{
  long long int A, B, C, D;
  cin >> A >> B >> C >> D;
  long long int count = 0;
  long long int a, b;
  a = C;
  b = D;
  long long int x = C * D;

  if(a<b){
    long long int tmp = a;
    a = b;
    b = tmp;
  }
  long long int r = a % b;
  while(r!=0){
    a = b;
    b = r;
    r = a % b;
  }
  long long int cb = x/b;

  long long int v_1, v_2, v_3;
  v_1 = (B / C - (A-1) / C);
  v_2 = (B / D - (A-1) / D);
  v_3 = (B / cb - (A-1) / cb);
  count = (B - (A-1)) - (v_1 + v_2 - v_3);
  cout << count << endl;
  return 0;
}
