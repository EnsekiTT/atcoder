#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> A(M);
    for(int i=0; i < M; i++){
      cin >> A[i];
    }
    vector<int> sev_nums = {0,1,2,3,4,5,6,7,8,9};
    vector<int> sev_segs = {0,2,5,5,4,5,6,3,7,6};
    vector<int> sev_counts = {0,0,0,0,0,0,0,0,0,0};
    int nums = 10;

    vector<int> segs(M);
    int seg_min = 10;
    int seg_min_i;
    for(int i=0; i < M; i++){
      segs[i] = sev_segs[A[i]];
      cout << segs[i];
    }
	cout << endl;
    int N_next = N;
    while(true){
      for(int i=0; i < M; i++){
        if(segs[i] < seg_min){
          seg_min_i = i;
          seg_min = segs[i];
        }
      }
      // 最小のマッチ数のもので一旦埋める
      sev_counts[seg_min_i] = N_next/seg_min;
      // 残りのマッチ数を求める
      N_next = N_next%seg_min;
      if(N_next == 0){
        break;
      }
      segs[seg_min_i] = 100;
    }

    return 0;
}

$ git config --global url."https://7daa0343ecabaf744be6706ea96c9aab47e1f79b:x-oauth-basic@github.com/".insteadOf "https://github.com/"
