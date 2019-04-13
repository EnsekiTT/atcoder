#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
  string S;
  char s[3];
  cin >> S;
  for(int i=0; i < S.length(); ++i){
    s[i] = S[i];
  }
  sort(s, s+3);
  S = s;
  if(S.find("abc") != string::npos){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}
