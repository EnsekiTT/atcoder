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

  int count = 0;
  // Set Start Position
  std::vector<int>::iterator startIt = X_diff.begin();
  std::vector<int>::iterator maxIt;
  for (int i = 0; i < N-1; i++){
    maxIt = std::max_element(startIt, X_diff.end());

    if(startIt < maxIt){
      count += std::accumulate(startIt, maxIt, 0);
    }

    startIt = next(maxIt);
    // Overrun Check
    if(startIt > X_diff.end()){
      startIt = X_diff.end();
      break;
    }
  }
  count += std::accumulate(startIt, X_diff.end(), 0);

  // Output
  cout << count << endl;
  return 0;
}
