#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include <climits>
#include <iomanip>

using namespace std;

int main()
{
  int N, K;
  long double ans;
  cin >> N >> K;
  int v;
  ans = 0;
  if(N == 1 && K == 1){
    cout << 1.0 << endl;
    return 0;
  }
  for(int i=1; i<=N; ++i){
    if(i == K){
      ans += static_cast<long double>(N-i+1)/static_cast<long double>(N);
      break;
    }
    for(int j=0; j < 18; ++j){
      if((i * (1 << j)) >= K){
        v = j;
        break;
      }
    }
    ans += 1.0/(static_cast<long double>(N)*static_cast<long double>(1<<v));
  }
  cout << fixed << setprecision(15) << ans << endl;
  return 0;
}
