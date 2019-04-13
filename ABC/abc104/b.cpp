#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
  string S;
  cin >> S;

  if(S[0] != 'A'){
    cout << "WA" << endl;
    return 0;
  }

  int pos = S.find("C");
  if(pos < 2 || pos > S.length()-2 || pos == string::npos){
    cout << "WA" << endl;
    return 0;
  }

  if(S.find_first_of("C") != S.find_last_of("C")){
    cout << "WA" << endl;
    return 0;
  }

  int big=0;
  for(int i=1; i < S.length(); ++i){
    if(i != pos){
      if((S[i]>= 'A') && (S[i]<='Z')){
        ++big;
      }
    }
  }

  if(big > 0){
    cout << "WA" << endl;
    return 0;
  }

  cout << "AC" << endl;
  return 0;
}
