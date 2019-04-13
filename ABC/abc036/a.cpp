#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  int A,B;
  cin >> A >> B;

  int count = B/A;
  if(B%A > 0){
    count++;
  }
  cout << count << endl;

  return 0;
}
