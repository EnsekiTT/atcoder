#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  int a[3];
  cin >> a[0] >> a[1] >> a[2];

  sort(a, a+3);
  int count = 3;
  if(a[0] == a[1]){
    --count;
  }
  if(a[1] == a[2]){
    --count;
  }
  cout << count << endl;

  return 0;
}
