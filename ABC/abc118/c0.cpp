#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i=0; i < N; i++){
      cin >> A[i];
    }

    //体力最小(1以上)のモンスターが体力最大のモンスターを限界まで攻撃する
    int alive_one = 0;
    int alive;
    int max_A, max_A_i;
    int min_A, min_A_i, min_A_max;

    min_A_max = *std::max_element(A.begin(), A.end());
    while(true){
      //生きているモンスターは1か？
      alive = 0;
      min_A = min_A_max;
      max_A = 0;
      for(int i=0; i < N; i++){
        if(A[i] >= 1){
          alive_one = i;
          alive++;
          // 最小値の更新
          if(A[i] < min_A){
            min_A_i = i;
            min_A = A[i];
          }
        }
      }
      if(alive == 1){
        break;
      }
      
      //攻撃されたモンスターの体力を攻撃したモンスターの体力と同じ値だけ減らす
      for(int i=0; i < N; i++){
        if(min_A_i != i){
          A[i] = A[i] % min_A;
        }
      }

      //debug
      /*
      cout << max_A << ',' << min_A << endl;
      for(int i = 0; i < N; i++){
        cout << A[i] << ',';
      }
      cout << endl;
      */
    }
    cout << A[alive_one] << endl;
    return 0;
}
