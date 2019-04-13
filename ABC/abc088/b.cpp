#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;



int main()
{
  int N;
  cin >> N;
  int a[N];
  for (int i = 0; i < N; i++) {
    cin >> a[i];
  }

  int bob = 0;
  int alice = 0;

  sort(a, a+N, greater<int>());

  for (int i = 0; i < N; i++) {
    if(i % 2 == 0){
      alice += a[i];
    }else{
      bob += a[i];
    }
  }

  cout << alice - bob << endl;

  return 0;
}
