#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
  int N;
  cin >> N;
  int d[N];
  for (int i = 0; i < N; i++) {
    cin >> d[i];
  }

  sort(d, d+N, greater<int>());

  int count = 1;
  int under_mochi = d[0];
  for (int i = 1; i < N; i++) {
    if(d[i] < under_mochi){
      ++count;
      under_mochi = d[i];
    }
  }

  cout << count << endl;

  return 0;
}
