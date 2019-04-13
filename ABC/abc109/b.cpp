#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
  int N;
  cin >> N;
  string W[N];
  for(int i=0; i<N; ++i){
    cin >> W[i];
  }

  bool rule = true;
  for(int i=0; i<N-1; ++i){
    if(*(W[i].end()-1) != *W[i+1].begin()){
      rule = false;
    }
    for(int j=0; j<i+1; ++j){
      if(W[i+1] == W[j]){
        rule = false;
      }
    }
  }

  if(rule){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }


  return 0;
}
