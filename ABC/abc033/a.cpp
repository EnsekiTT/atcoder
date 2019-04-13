#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  string N;
  cin >> N;
  int flag = 0;
  for(int i=0; i < N.length(); i++){
    if(N[0] == N[i]){
      flag++;
    }
  }
  if(flag == 4){
    cout << "SAME" << endl;
  }else{
    cout << "DIFFERENT" << endl;
  }
  return 0;
}
