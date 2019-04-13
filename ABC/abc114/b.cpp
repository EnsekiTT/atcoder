#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  string S;
  cin >> S;

  string val;
  int min_num = 754;
  for(int i=0; i < S.length()-2; ++i){
    val = S.substr(i, 3);
    if(min_num > abs(753 - stoi(val))){
      min_num = abs(753 - stoi(val));
    }
  }
  cout << min_num << endl;

  return 0;
}
