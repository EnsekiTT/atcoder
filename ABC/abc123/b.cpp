#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include <climits>
using namespace std;

int main()
{
  vector<int> A(5);

  for(int i=0; i<5; i++){
    cin >> A[i];
  }

  int sum = 0;
  int min_sum = 99999999;
  for(int j=0; j<5; j++){
    sum = 0;
    for(int i=0; i<5; i++){
      if(i == j){
        continue;
      }
      if(A[i] % 10 == 0){
        sum += (A[i]/10)*10;
      }else{
        sum += (A[i]/10)*10 + 10;
      }
    }
    sum += A[j];
    if(min_sum > sum){
      min_sum = sum;
    }
  }
  cout << min_sum << endl;
  return 0;
}
