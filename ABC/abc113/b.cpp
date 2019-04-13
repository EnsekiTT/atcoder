#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
  int N;
  double T, A;
  cin >> N >> T >> A;
  double H[N];
  double temp[N];
  int index = 0;
  double diff = 100000;
  for(int i=0; i < N; i++){
    cin >> H[i];
    temp[i] = T - H[i] * 0.006;

    if(diff > abs(A-temp[i])){
      diff = abs(A-temp[i]);
      index = i;
    }
  }
  cout << index+1 << endl;

  return 0;
}
