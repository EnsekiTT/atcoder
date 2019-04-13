#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  int N;
  cin >> N;

  long long int mean = 0;
  for(int i=1; i <= N; i++){
    mean += i;
  }

  cout << mean*10000/N << endl;
  return 0;
}
