#include<iostream>
#include<string>
using namespace std;
int main()
{
  int A, B, C;
  cin >> A >> B >> C;

  if(B >= A*C){
    cout << C << endl;
  }else{
    cout << int(B/A) << endl;
  }
  return 0;
}
