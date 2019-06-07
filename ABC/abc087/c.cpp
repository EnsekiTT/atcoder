#include<iostream>
#include<string>
#include<vector>
#include<numeric>

using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<int> A1(N), A2(N);
  for(int i=0; i<N; ++i){
    cin >> A1[i];
  }
  for(int i=0; i<N; ++i){
    cin >> A2[i];
  }

  int sum1, sum2, max_sum;
  max_sum = 0;
  for(int i=0; i<N; ++i){
    sum1= accumulate(A1.begin(), A1.begin()+i+1, 0);;
    sum2= accumulate(A2.begin()+i, A2.end(), 0);;
    if(max_sum < (sum1+sum2)){
      max_sum = sum1+sum2;
    }
  }
  cout << max_sum << endl;
  return 0;
}
