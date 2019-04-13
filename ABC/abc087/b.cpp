#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int main()
{
  int A, B, C, X;
  cin >> A; //500
  cin >> B; //100
  cin >> C; //50
  cin >> X;

  int count = 0;
  for(int a = 0; a < A+1; ++a){
    for(int b = 0; b < B+1; ++b){
      for(int c = 0; c < C+1; ++c){
        if(X == a*500+b*100+c*50){
          ++count;
        }
      }
    }
  }
  cout << count << endl;

  return 0;
}
