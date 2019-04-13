#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include <climits>
using namespace std;

int main()
{
  string S;
  cin >> S;

  int pattern_A = 0;
  int pattern_B = 0;

  for(int i=0; i<S.length(); ++i){
    if(i%2 == 0 && S[i] != '0'){
      pattern_A++;
    }
    if(i%2 == 1 && S[i] != '1'){
      pattern_A++;
    }
    if(i%2 == 1 && S[i] != '0'){
      pattern_B++;
    }
    if(i%2 == 0 && S[i] != '1'){
      pattern_B++;
    }
  }

  if(pattern_A > pattern_B){
    cout << pattern_B << endl;
  }else{
    cout << pattern_A << endl;
  }
  return 0;
}
