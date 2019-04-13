#include<iostream>
#include<string>
using namespace std;
int main()
{
  int N;
  cin >> N;

  double x[N];
  string u[N];

  double price = 0;

  for(int i=0; i < N; i++){
    cin >> x[i] >> u[i];
    if(u[i] == "JPY"){
      price += x[i];
    }else{
      price += x[i] * 380000;
    }
  }

  cout << price << endl;

  return 0;
}
