#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
  int N;
  cin >> N;
  int ans = 1;
  for(int i=1; i < N; ++i){
    if(i*i > N){
      ans = i-1;
      break;
    }
  }

  cout << ans*ans << endl;
  return 0;
}
