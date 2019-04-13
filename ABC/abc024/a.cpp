#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  int A, B, C, K;
  int S, T;

  cin >> A >> B >> C >> K;
  cin >> S >> T;

  int price = 0;

  if((S+T) >= K){
    price += (A-C)*S;
    price += (B-C)*T;
  }else{
    price += A*S;
    price += B*T;
  }

  cout << price << endl;

  return 0;
}
