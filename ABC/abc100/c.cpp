#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
  int N;
  cin >> N;
  long long int a[N];
  for(int n = 0; n < N; ++n){
    cin >> a[n];
  }

  int count = 0;
  for(int n = 0; n < N; ++n){
    while(true){
      if(a[n] % 2 == 0){
        ++count;
        a[n] = a[n] / 2;
      }else{
        break;
      };
    }
  }
  cout << count << endl;
  return 0;
}
