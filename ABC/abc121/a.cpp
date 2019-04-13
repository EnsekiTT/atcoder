#include<iostream>
#include<string>
using namespace std;
int main()
{
  int H, W, h, w;
  cin >> H >> W;
  cin >> h >> w;

  cout << H*W - ((H-h)*w + (W-w)*h + h*w) << endl;
  return 0;
}
