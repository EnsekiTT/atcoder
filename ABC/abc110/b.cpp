#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
  int N, M, X, Y;
  cin >> N >> M >> X >> Y;
  int x[N], y[M];
  int x_max, y_min;
  x_max = -101;
  y_min = 101;
  for(int i=0; i < N; ++i){
    cin >> x[i];
    x_max = max(x[i], x_max);
  }

  for(int i=0; i < M; ++i){
    cin >> y[i];
    y_min = min(y[i], y_min);
  }

  for(int i=-100; i < 101; ++i){
    if(X < i && i <= Y && x_max < i && y_min >= i){
      cout << "No War" << endl;
      return 0;
    }
  }
  cout << "War" << endl;
  return 0;
}
