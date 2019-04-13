#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  int W,H;
  cin >> W >> H;
  int asp;
  asp = (10*W)/H;

  if(asp == 13){
    cout << "4:3" << endl;
  }else{
    cout << "16:9" << endl;
  }

  return 0;
}
