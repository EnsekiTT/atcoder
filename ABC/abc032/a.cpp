#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  int a, b, n;
  cin >> a >> b >> n;

  for(int i = n; i < 100*100*5; i++){
    if(i%a==0 && i%b==0){
      cout << i << endl;
      break;
    }
  }
  return 0;
}
