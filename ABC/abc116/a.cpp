#include<iostream>
#include <cassert>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
  int line[3];
  int x,y;
  for(int i=0; i < 3; ++i){
    cin >> line[i];
  }
  int max_index = max_element(line, line + 3) - line;

  if(max_index == 0){
    x = line[1];
    y = line[2];
  }else if(max_index == 1){
    x = line[0];
    y = line[2];
  }else{
    x = line[0];
    y = line[1];
  }

  cout << x*y/2 << endl;

  return 0;
}
