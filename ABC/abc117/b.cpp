#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<int> L(N);
  for (int i = 0; i < N; i++) {
      cin >> L[i];
  }
  int max_L = *std::max_element(L.begin(), L.end());
  if(max_L < (std::accumulate(L.begin(), L.end(), 0)-max_L)){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}
