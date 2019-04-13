#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  int A[3];
  for(int i=0; i < 3; ++i){
    cin >> A[i];
  }
  int count_5 = 0;
  int count_7 = 0;
  for(int i=0; i < 3; ++i){
    if(A[i] == 5){
      ++count_5;
    }
    if(A[i] == 7){
      ++count_7;
    }
  }
  if(count_5 == 2 && count_7 == 1){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }

  return 0;
}
