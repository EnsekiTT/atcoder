#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  int s[3], e[3];
  int score = 0;
  for(int i=0; i < 3; i++){
    cin >> s[i] >> e[i];
    score += s[i]*e[i] / 10;
  }
  cout << score << endl;

  return 0;
}
