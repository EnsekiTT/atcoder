#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include <numeric>
#include <iostream>
#include <array>
#include <climits>
using namespace std;

int main()
{
  int N, K;
  string S;
  cin >> N >> K;
  cin >> S;

  S += '0';
  int ans=0;
  int count=0;
  int zero_area=0;
  if(N == 1){
    cout << 1 << endl;
    return 0;
  }
  if(S[0] == '0'){
    ++count;
  }
  for(int i=0; i<N; ++i){
    if(S[i] == '1' && S[i+1] == '0'){
      if(count == K){
        ans = max(ans, i-zero_area+1);
        ++zero_area;
        while(S[zero_area-1] != '0' || S[zero_area] != '1'){
          ++zero_area;
        }
      }else{
        ++count;
      }
    }
  }
  ans = max(ans, N - zero_area);
  cout << ans << endl;

  return 0;
}
