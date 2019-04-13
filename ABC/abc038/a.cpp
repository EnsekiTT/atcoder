#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  string S;
  cin >> S;
  if(S[S.length()-1] == 'T'){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
  return 0;
}
