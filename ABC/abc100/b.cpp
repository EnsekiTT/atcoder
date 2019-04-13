#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
  int D, N;
  cin >> D >> N;

  if(N != 100){
    cout << N * pow(100, D) << endl;
  }else{
    cout << int((N+1) * pow(100, D)) << endl;
  }
  return 0;
}
