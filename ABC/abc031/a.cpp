#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  int A, D;
  cin >> A >> D;

  int attack, deffence;
  attack = (A+1)*D;
  deffence = A*(D+1);
  if(attack >= deffence){
    cout << attack << endl;
  }else{
    cout << deffence << endl;
  }

  return 0;
}
