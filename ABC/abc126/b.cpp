#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include <climits>
using namespace std;

int main()
{
  string S;
  string S_f, S_b;
  cin >> S;
  S_f = S.substr(0, 2);
  S_b = S.substr(2, 2);
  int I_f, I_b;
  I_f = atoi(S_f.c_str());
  I_b = atoi(S_b.c_str());

  if(I_f <= 12 && I_b <= 12 && I_f > 0 && I_b > 0){
    cout << "AMBIGUOUS" << endl;
  }else if((I_f > 12 || I_f == 0) && I_b <= 12 && I_b > 0){
    cout << "YYMM" << endl;
  }else if(I_f <= 12 && (I_b > 12 || I_b == 0) && I_f > 0){
    cout << "MMYY" << endl;
  }else{
    cout << "NA" << endl;
  }
  return 0;
}
