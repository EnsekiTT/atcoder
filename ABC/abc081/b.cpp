#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; ++i) {
      cin >> A[i];
  }

  int count = 0;
  int break_flag = 0;
  while(true){
    for(int i = 0; i < N; ++i){
      if(A[i] % 2 != 0){
        ++break_flag;
      }else{
        A[i] = A[i] >> 1;
      }
    }
    if(break_flag >= 1){
      break;
    }else{
      ++count;
    }
  }

  cout << count << endl;
  return 0;
}
