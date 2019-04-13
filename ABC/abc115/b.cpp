#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  int N;
  cin >> N;
  int p[N];
  for(int i=0; i < N; i++){
    cin >> p[i];
  }

  sort(p, p+N);

  int price = 0;
  for(int i=0; i < N-1; i++){
    price += p[i];
  }
  price += p[N-1]/2;
  cout << price << endl;
  return 0;
}
