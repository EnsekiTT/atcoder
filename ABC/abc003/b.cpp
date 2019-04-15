#include<iostream>
#include <iomanip>
#include<string>
#include<algorithm>
using namespace std;


int main()
{
  string S, T;
  cin >> S;
  cin >> T;
  string dict = "atcoder";
  int s_pos, t_pos;
  for(int i=0; i < T.size(); ++i){
    if((S[i] == T[i]) && (S[i] == '@')){
      S[i] = '#';
      T[i] = '#';
    }
  }

  for(int i=0; i < T.size(); ++i){
    s_pos = S.find_first_of('@');
    t_pos = T.find_first_of('@');

    if(dict.find_first_of(S[t_pos]) != string::npos){
      T[t_pos] = S[t_pos];
    }
    if(dict.find_first_of(T[s_pos]) != string::npos){
      S[s_pos] = T[s_pos];      
    }
  }

  if(S == T){
    cout << "You can win" << endl;
  }else{
    cout << "You will lose" << endl;
  }
  return 0;
}
