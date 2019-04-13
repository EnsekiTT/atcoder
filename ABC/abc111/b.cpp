#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
  int N;
  cin >> N;
  int v;

  for(int i=1; i < 10; i++){
    v = i + 10*i + 100 * i;
    if(N <= v){
      cout << v << endl;
      return 0;
    }
  }
  return 0;
}
