#include<iostream>
#include<string>
using namespace std;
int main()
{
  int K;
  cin >> K;

  int K_1 = int(K/2);
  if(K % 2 == 1){
    cout << (K_1+1)*K_1 << endl;
  }else{
    cout << K_1 * K_1 << endl;
  }

  return 0;
}
