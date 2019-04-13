#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  int A, B, C, D;
  cin >> A >> B >> C >> D;
  int TK = (100000*B)/A;
  int AO = (100000*D)/C;
  if(TK > AO){
    cout << "TAKAHASHI" << endl;
  }else if(TK == AO){
    cout << "DRAW" << endl;
  }else{
    cout << "AOKI" << endl;
  }
  return 0;
}
