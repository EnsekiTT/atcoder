#include<iostream>
#include <iomanip>
#include<string>
#include<algorithm>
using namespace std;

string remove_char(string W, char c){
  int p;
  while(W.find_first_of(c) != string::npos){
    p = W.find_first_of(c);
    W.erase(W.begin() + p);
  }
  return W;
}

int main()
{
  string W;
  cin >> W;
  W = remove_char(W, 'a');
  W = remove_char(W, 'i');
  W = remove_char(W, 'u');
  W = remove_char(W, 'e');
  W = remove_char(W, 'o');
  cout << W << endl;
  return 0;
}
