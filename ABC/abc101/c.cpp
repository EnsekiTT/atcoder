#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
  int N, K;
  cin >> N >> K;
  string S;
  cin >> S;

  // K-1ずつ変更する
  if((N-1)%(K-1)>0){
    cout << (N-1)/(K-1) + 1 << endl;
  }else{
    cout << (N-1)/(K-1) << endl;
  }
  return 0;
}
