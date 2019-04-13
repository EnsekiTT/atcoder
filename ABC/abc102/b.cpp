#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
  int N;
  cin >> N;

  int A[N];
  for(int n; n<N; ++n){
    cin >> A[n];
  }

  sort(A, A+N);

  cout << abs(A[0]-A[N-1]) << endl;
}
