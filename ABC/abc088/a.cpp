#include<iostream>
#include<string>
using namespace std;
int main()
{
  int N, A;
  cin >> N;
  cin >> A;

  cout << (N%500 <= A ? "Yes" : "No") << endl;
  return 0;
}
