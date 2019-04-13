#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  int A[3];
  int rank[3];
  cin >> A[0] >> A[1] >> A[2];

  if(A[0] > A[1] && A[0] > A[2]){
    cout << 1 << endl;
  }else if(A[0] > A[1] || A[0] > A[2]){
    cout << 2 << endl;
  }else{
    cout << 3 << endl;
  }

  if(A[1] > A[2] && A[1] > A[0]){
    cout << 1 << endl;
  }else if(A[1] > A[2] || A[1] > A[0]){
    cout << 2 << endl;
  }else{
    cout << 3 << endl;
  }

  if(A[2] > A[0] && A[2] > A[1]){
    cout << 1 << endl;
  }else if(A[2] > A[0] || A[2] > A[1]){
    cout << 2 << endl;
  }else{
    cout << 3 << endl;
  }

  return 0;
}
