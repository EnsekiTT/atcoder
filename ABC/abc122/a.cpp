#include<iostream>
#include<string>
using namespace std;
int main()
{
  string b;
  cin >> b;

  if(b[0] == 'A'){
    cout << "T" << endl;
  }else if(b[0] == 'C'){
    cout << "G" << endl;
  }else if(b[0] == 'G'){
    cout << "C" << endl;
  }else if(b[0] == 'T'){
    cout << "A" << endl;
  }
  return 0;
}
