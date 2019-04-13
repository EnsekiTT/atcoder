#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>
#include <climits>
using namespace std;

int main() {
  // 入力
  int N, W;
  cin >> N >> W;
  int ans[3];
  ans[0] = -1;
  ans[1] = -1;
  ans[2] = -1;
  int val = 0;
  int k;
  bool break_flag = false;
  for(int i = 0; i < N+1; ++i){
    for(int j = 0; j < N+1; ++j){
      if((i + j) > N){
        break;
      }

      k = N-i-j;
      if(k < 0){break;}

      val = i*10000 + j*5000 + k*1000;
      if((val == W) && (i+j+k == N)){
        ans[0] = i;
        ans[1] = j;
        ans[2] = k;
        break_flag = true;
        break;
      }
    }
    if(break_flag){
      break;
    }
  }

  cout << ans[0] << ' ' << ans[1] << ' ' << ans[2] << endl;
}
