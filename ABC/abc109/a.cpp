#include<iostream>
#include<string>
using namespace std;
int main()
{
  int A, B;
  cin >> A >> B;

  if(A*B % 2 == 1){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }

  return 0;
}
