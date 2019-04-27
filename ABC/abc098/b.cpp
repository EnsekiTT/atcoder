#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
  int a, b;
  cin >> a >> b;
  int v=0;
  for(int i=0; i < (b-a); ++i){
    v += i;
  }
  cout << v-a << endl;
  return 0;
}
