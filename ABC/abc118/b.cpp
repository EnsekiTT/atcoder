#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int main()
{
    int N,M;
    cin >> N >> M;
    int like;
    vector<int> K(N);
    vector<int> A(M);
    for(int i=0; i < M; i++){
      A[i] = 0;
    }

    for(int i=0; i < N; i++){
      cin >> K[i];
      for(int j=0; j < K[i]; j++){
        cin >> like;
        A[like-1] += 1;
      }
    }

    int count = 0;
    for(int i=0; i < M; i++){
      if(A[i] == N){
        count++;
      }
    }
    cout << count << endl;
    return 0;
}
