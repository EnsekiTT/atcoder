#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
  int N;
  cin >> N;

  if(N <= 999){
    cout << "ABC" << endl;
  }else{
    cout << "ABD" << endl;
  }

  return 0;
}
