#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include <numeric>
using namespace std;

long long int gcd(int a, int b){
  return b ? gcd(b,a%b) : a;
}

int main()
{
  int N;
  cin >> N;
  long long int A[N], L[N], R[N];
  long long int ans = 0;
  for(int i=0; i < N; ++i){
    cin >> A[i];
    L[i] = 0;
    R[i] = 0;
  }
  for(int i=0; i < N; ++i){
    L[i+1] = gcd(L[i], A[i]);
  }
  reverse(A, A+N);
  for(int i=0; i < N; ++i){
    R[i+1] = gcd(R[i], A[i]);
  }
  for(int i=0; i < N; ++i){
    ans = max(ans, gcd(L[i], R[N-1-i]));
  }
  cout << ans << endl;

  return 0;
}
