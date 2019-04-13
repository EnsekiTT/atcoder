#include<iostream>
#include<string>
using namespace std;
int main()
{
  int s;
  cin >> s;
  int a[1000000];

  a[0] = s;
  for(int i=0; i < 1000000; i++){
    if(a[i] % 2 == 0){
      a[i+1] = a[i] / 2;
    }else{
      a[i+1] = 3*a[i]+1;
    }
    for(int j=0; j < i; j++){
      if(a[j] == a[i+1]){
        cout << i+1+1 << endl;
        return 0;
      }
    }
  }

  return 0;
}
