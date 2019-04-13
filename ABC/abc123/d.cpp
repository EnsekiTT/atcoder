#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include <numeric>
#include <iostream>
#include <array>
#include <climits>
using namespace std;

int main()
{
  int X, Y, Z, K;
  cin >> X >> Y >> Z >> K;
  vector<long long int> A(X+Y+Z);
  vector<int> label(X+Y+Z); // 0: A, 1: B, 2: C

  for(int i=0; i<X; i++){
    cin >> A[i];
    label[i] = 0;
  }
  for(int i=X; i<Y+X; i++){
    cin >> A[i];
    label[i] = 1;
  }
  for(int i=X+Y; i<X+Y+Z; i++){
    cin >> A[i];
    label[i] = 2;
  }
  vector<size_t> indices(A.size());
  iota(indices.begin(), indices.end(), 0);

  sort(indices.begin(), indices.end(), [&A](size_t i1, size_t i2) {
      return A[i1] < A[i2];
  });

  int a=0, b=0, c=0;
  for(int i=0; i < K; ++i){
    if(label[i] == 0){
      a = A[i];
    }else if(label[i] == 1){
      b = A[i];
    }else if(label[i] == 2){
      c = A[i];
    }
    cout << a + b + c << endl;
  }
  return 0;
}
