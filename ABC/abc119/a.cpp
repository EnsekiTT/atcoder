#include<iostream>
#include<string>
using namespace std;
int main()
{
  string S;
  cin >> S;

  int y,m,d;
  y = atoi(S.substr(0, 4).c_str());
  m = atoi(S.substr(5, 2).c_str());
  d = atoi(S.substr(8, 2).c_str());

  if(y <= 2019){
    if(m <= 4){
      if(d <= 30){
        cout << "Heisei" << endl;
        return 0;
      }
    }
  }
  cout << "TBD" << endl;
  return 0;
}
