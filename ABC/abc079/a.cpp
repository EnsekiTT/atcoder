#include<iostream>
using namespace std;
int main()
{
    string N;
    cin >> N;
    int stk = 0;
    char temp;
    for(int i=0; i < 4; ++i){
      if(i==0){
        temp = N[i];
        stk = 1;
      }else{
        if(temp == N[i]){
          stk += 1;
        }else{
          if(stk == 3){
            break;
          }else{
            stk = 1;
          }
        }
        temp = N[i];
      }
    }
    cout << (stk >= 3 ? "Yes" : "No") << endl;

    return 0;
}
