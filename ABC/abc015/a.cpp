#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  string A, B;
  cin >> A >> B;

  if(A.length() > B.length()){
    cout << A << endl;
  }else{
    cout << B << endl;
  }
  return 0;
}
