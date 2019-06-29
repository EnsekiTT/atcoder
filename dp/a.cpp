#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
  ll N;
  cin >> N;
  vector<ll> h(N);
  vector<ll> cost(N);
  for(int i=0; i < N; ++i){
    cin >> h[i];
  }

  cost[0] = 0;
  ll skip_1_cost;
  ll skip_2_cost;
  for(int i=1; i < N; ++i){
    skip_1_cost = abs(h[i-1]-h[i]) + cost[i-1];
    if(i >= 2){
      skip_2_cost = abs(h[i-2]-h[i]) + cost[i-2];
      cost[i] = min(skip_1_cost, skip_2_cost);
    }else{
      cost[i] = skip_1_cost;
    }
  }
  cout << cost[N-1] << endl;
  return 0;
}