#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include <climits>
using namespace std;

int main()
{
  int N;
  cin >> N;
  std::vector<int> V(N);
  std::vector<int> C(N);
  for(int i=0; i < N; ++i){
    cin >> V[i];
  }
  for(int i=0; i<N; ++i){
    cin >> C[i];
  }
  int sumV, sumC;
  sumV = 0;
  sumC = 0;
  for(int i=0; i<N; ++i){
    if(V[i] > C[i]){
      sumV += V[i];
      sumC += C[i];
    }
  }

  cout << sumV - sumC << endl;

  return 0;
}
