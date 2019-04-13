#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
  int N, T;
  cin >> N >> T;
  int c[N], t[N];
  int cost = 10000;
  int index = -1;
  for(int i=0; i < N; ++i){
    cin >> c[i] >> t[i];
    if(t[i] <= T){
      if(c[i] < cost){
        cost = c[i];
        index = i;
      }
    }
  }

  if(index == -1){
    cout << "TLE" << endl;
  }else{
    cout << c[index] << endl;
  }


  return 0;
}
