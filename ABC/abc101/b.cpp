#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
  string N;
  cin >> N;

  long N_int;
  N_int = stol(N);

  int N_sum;
  for(int i=0; i < N.length(); ++i){
    N_sum += stoi(N.substr(i,1));
  }

  if(N_int % N_sum == 0){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }

  return 0;
}
