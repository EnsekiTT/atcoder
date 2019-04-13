#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
  // input
  int N, M;
  cin >> N >> M;
  vector<int> X(M);
  for (int i = 0; i < M; i++) {
      cin >> X[i];
  }

  if(N >= M){
    cout << 0 << endl;
    return 0;
  }

  // sort X
  sort(X.begin(), X.end());

  // Diff X
  vector<int> X_diff(M-1);
  for (int i = 0; i < M-1; i++){
    X_diff[i] = X[i+1] - X[i];
  }

  sort(X_diff.begin(), X_diff.end(),std::greater<int>());
  int L = 0;
  for(int i = 0; i < N-1; i++){
    L += X_diff[i];
  }
  cout << X[M-1] - X[0] - L << endl;

  // Output
  return 0;
}
