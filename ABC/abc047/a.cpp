#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  int a[3];
  cin >> a[0] >> a[1] >> a[2];
  sort(a, a+3);
  if(a[0]+a[1] == a[2]){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }

  return 0;
}
