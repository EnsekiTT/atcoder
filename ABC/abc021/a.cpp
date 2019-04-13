#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  int N;
  cin >> N;
  int two_count = N / 2;
  int one_count = N % 2;

  cout << one_count + two_count << endl;
  if(one_count > 0){
    cout << 1 << endl;
  }
  if(two_count > 0){
    for(int i = 0; i < two_count; ++i){
      cout << 2 << endl;
    }
  }

  return 0;
}
