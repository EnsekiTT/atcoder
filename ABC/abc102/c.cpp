#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include <climits>
using namespace std;

long long int get_sum(int b, vector<int> A, int N);

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  vector<int> B(N);
  for(int i=0; i<N; ++i){
    cin >> A[i];
    B[i] = A[i] - (i+1);
  }
  sort(B.begin(), B.end());
  size_t median_index = B.size() / 2;
  int median = (B.size() % 2 == 0
    ? static_cast<int>(B[median_index] + B[median_index - 1]) / 2
    : B[median_index]);
  cout << get_sum(median, A, N) << endl;

  return 0;
}

long long int get_sum(int b, vector<int> A, int N){
  long long int sum = 0;
  for(int i=0; i < N; i++){
    sum += abs(A[i]-(b+i+1));
  }
  return sum;
}
