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
  char t = S[0];
  for(int i=1; i < 4; ++i){
    if(t == S[i]){
      cout << "Bad" << endl;
      return 0;
    }
    t = S[i];
  }
  cout << "Good" << endl; 
  return 0;
}
