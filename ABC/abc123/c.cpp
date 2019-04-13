#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include <climits>
using namespace std;

int main()
{
  vector<long long int> A(5);
  long long int N;

  cin >> N;
  for(int i=0; i<5; i++){
    cin >> A[i];
  }
  sort(A.begin(), A.end());
  if(N % A[0] == 0){
    cout << 5 + (N / A[0]) - 1<< endl;
  }else{
    cout << 5 + (N / A[0]) << endl;
  }
  return 0;
}
