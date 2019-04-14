#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include <climits>
using namespace std;

int main()
{
  int A, B;
  cin >> A >> B;

  if(A > B){
    cout << A*2 - 1 << endl;
  }else if(A < B){
    cout << B*2 - 1 << endl;
  }else{
    cout << A + B << endl;
  }
  return 0;
}
