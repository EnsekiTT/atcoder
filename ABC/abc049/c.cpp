#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>
#include <climits>
#include <string>
using namespace std;

int rec_find(S){

}

int main() {
  // 入力
  string S;
  cin >> S;
  string Ts[] = {"eraser", "erase", "dreamer", "dream"};
  int pos = 0;

  while(true){
    for(int i = 0; i < 4; i++){
      pos = S.find(Ts[i]);
      cout << S << "," << Ts[i] << "," << pos << endl;
      if(pos == 0){
        S.erase(0, Ts[i].length());
        notfound = false;
        break;
      }
    }
    if(notfound){
      state = false;
      break;
    }
    if(S.length() == 0){
      break;
    }


  }

  if(state){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }

  return 0;
}
