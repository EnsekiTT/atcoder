#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
  string n = "";
  cin >> n;

  replace(n.begin(), n.end(), '1', 't');
  replace(n.begin(), n.end(), '9', '1');
  replace(n.begin(), n.end(), 't', '9');
  cout << n << endl;
  return 0;
}
