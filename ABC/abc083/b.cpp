#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int ctoi(const char c){
  if('0' <= c && c <= '9') return (c-'0');
  return -1;
}

int main()
{
  int N, A, B;
  cin >> N >> A >> B;

  string num;
  int sum_val;
  int count = 0;
  for(int i = 1; i <= N; ++i){
    num = to_string(i);
    sum_val = 0;
    for(int j = 0; j < num.length(); ++j){
      sum_val += ctoi(num[j]);
    }
    if((sum_val >= A) && (sum_val <= B)){
      count += i;
    }

  }
  cout << count << endl;
  return 0;
}
