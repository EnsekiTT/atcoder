#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  int N;
  cin >> N;
  int count = 0;
  for(int i=1; i < N+1; ++i){
    count += i;
  }
  cout << count << endl;

  return 0;
}
