#include<iostream>
#include<string>
using namespace std;
int main()
{
  int A, B, K;
  int count=0;
  int list[100];

  cin >> A >> B >> K;

  for(int i=1; i<1000; i++){
    if((A%i==0) && (B%i==0)){
      count++;
      list[count] = i;
    }
  }

  cout << list[count-(K-1)] << endl;

  return 0;
}
