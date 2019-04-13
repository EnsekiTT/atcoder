#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
  string S, T;
  cin >> S >> T;
  bool ans;
  ans = false;
  for(int i=0; i <= S.length(); ++i){
    if(S == T){
      ans = true;
      break;
    }
    S = S.back() + S.substr(0, S.length()-1);
  }


  if(ans){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}
