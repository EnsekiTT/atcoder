#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
  int A, B, X;
  cin >> A >> B >> X;

  if(A > X){
    cout << "NO" << endl;
  }else{
    int B_;
    B_ = X-A;
    cout << (B >= B_ ? "YES" : "NO") << endl;
  }

  return 0;
}
