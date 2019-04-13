#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
  vector<int> N(3);
  for(int i = 0; i < 3; ++i){
    cin >> N[i];
  }
  sort(N.begin(), N.end());
  cout << N[2] * 10 + N[1] + N[0] << endl;
  return 0;
}
