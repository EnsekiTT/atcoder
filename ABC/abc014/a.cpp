#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  int a, b;
  cin >> a >> b;

  for(int i =1; i < 100; ++i){
      if(a-(i*b) <= 0){
        cout << -(a-(i*b)) << endl;
        return 0;
      }
  }

  return 0;
}
