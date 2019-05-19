#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
  int X;
  cin >> X;
  int ans, p;
  ans = 0;
  for(int i=1; i <= X; ++i){
    for(int j=2; j < 10; ++j){
      p = i;
      for(int k=1; k < j; ++k){
        p = p * i;
      }
      if(p <= X){
        if(p > ans){
          ans = p;
        }
      }
    }
  }
  cout << ans << endl;
}
