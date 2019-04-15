#include<iostream>
#include <iomanip>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  double m;
  cin >> m;
  double mkm = m / 1000;
  if(mkm < 0.1){
    cout << "00" << endl;
  }else if(0.1 <= mkm && mkm <= 5.0){
    cout << setfill('0') << setw(2) << right << (int)(mkm*10) << endl;
  }else if(6.0 <= mkm && mkm <= 30.0){
    cout << (int)(mkm+50) << endl;
  }else if(35.0 <= mkm && mkm <= 70.0){
    cout << (int)(((mkm-30)/5)+80) << endl;
  }else if(70.0 < m){
    cout << 89 << endl;
  }
  return 0;
}
