#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  int N, S, T;
  cin >> N >> S >> T;
  int W;
  cin >> W;
  int A[N];
  for(int i = 0; i < N-1; ++i){
    cin >> A[i];
  }

  int best_count = 0;
  for(int i = 0; i < N; ++i){
    if(W >= S && W <= T){
      best_count++;
    }
    W = W + A[i];
  }

  cout << best_count << endl;

  return 0;
}
