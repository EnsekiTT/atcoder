#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include <climits>
using namespace std;

int main()
{
  int N, K;
  string S;
  cin >> N >> K;
  cin >> S;
  transform(&S[K-1], &S[K], &S[K-1], ::tolower);

  cout << S << endl;

  return 0;
}
