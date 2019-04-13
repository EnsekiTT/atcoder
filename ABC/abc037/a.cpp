#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  int A,B,C;
  cin >> A >> B >> C;

  int count;
  if(A > B){
    count = C/B;
  }else{
    count = C/A;
  }
  cout << count << endl;
  return 0;
}
