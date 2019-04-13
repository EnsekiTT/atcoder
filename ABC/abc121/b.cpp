#include<iostream>
#include<string>
using namespace std;
int main()
{
  int N, M, C;
  cin >> N >> M >> C;
  int A[N][M], B[M];
  for(int m=0; m < M; ++m){
    cin >> B[m];
  }
  for(int n=0; n < N; ++n){
    for(int m=0; m < M; ++m){
      cin >> A[n][m];
    }
  }

  int score, ans;
  ans = 0;
  for(int i=0; i < N; ++i){
    score = 0;
    for(int m=0; m < M; ++m){
      score += A[i][m]*B[m];
    }
    score += C;
    if(score > 0){
      ++ans;
    }
  }

  cout << ans << endl;
  return 0;
}
