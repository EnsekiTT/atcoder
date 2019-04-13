#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
  string S;
  cin >> S;
  int price = 700;
  for(int i; i < S.length(); ++i){
    if(S[i] == 'o'){
      price += 100;
    }
  }
  cout << price << endl;
  return 0;
}
