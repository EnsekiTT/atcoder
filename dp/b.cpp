#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
  ll N, K;
  cin >> N >> K;
  vector<ll> h(N);
  for(int i=0; i<N; ++i){
    cin >> h[i];
  }

  vector<ll> dp(N);
  vector<ll> costs(K);
  int stop_j = 0;
  for(int i=1; i<N; ++i){
    stop_j = 1;
    for(int j=1; j<=K; ++j){
      if(i-j >= 0){
        costs[j-1] = abs(h[i-j]-h[i]) + dp[i-j];
        stop_j = j;
      }else{
        break;
      }
    }
    dp[i] = *min_element(costs.begin(), costs.begin()+stop_j);
  }
  cout << dp[N-1] << endl;
  return 0;
}