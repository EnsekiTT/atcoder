#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  string S;
  int N;
  cin >> S >> N;

  int count = 1;
  for(int i=0; i < S.length(); ++i){
    for(int j=0; j < S.length(); ++j){
      if(count == N){
        cout << S[i] << S[j] << endl;
        return 0;
      }
      ++count;
    }
  }
  return 0;
}
