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
  int k;

  for(int i=0; i<5; i++){
    cin >> A[i];
  }
  cin >> k;

  if(A[4] - A[0] > k){
    cout << ":(" << endl;
  }else{
    cout << "Yay!" << endl;
  }
  return 0;
}
