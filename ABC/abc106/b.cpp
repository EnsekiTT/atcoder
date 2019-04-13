#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
  int N;
  cin >> N;
  int count = 0;
  int ans_count = 0;
  for(int i=1; i<=N; i=i+2){
    count = 0;
    for(int j=1; j<=i; j=j+2){
      if(i%j==0){
        ++count;
      }
    }
    if(count == 8){
      ++ans_count;
    }
  }

  cout << ans_count << endl;

  return 0;
}
