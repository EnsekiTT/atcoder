#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  int N, K, X, Y;
  cin >> N >> K >> X >> Y;

  int count = 0;

  if(N > K){
    count += K * X;
    count += (N-K) * Y;
  }else{
    count += N * X;
  }
  cout << count << endl;


  return 0;
}
