#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
  int N;
  cin >> N;
  int cakes, donuts;
  for(cakes=0; cakes <= N/4; ++cakes){
    for(donuts=0; donuts <=N/7; ++donuts){
      if(N == (cakes*4+donuts*7)){
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;
  return 0;
}
