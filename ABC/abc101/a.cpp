#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
  string S;
  cin >> S;

  int count = 0;
  for(int i=0; i < S.length(); ++i){
    S[i] == '+'? ++count : --count;
  }
  cout << count << endl;

  return 0;
}
