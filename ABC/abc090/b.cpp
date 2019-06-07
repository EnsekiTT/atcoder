#include<iostream>
#include<string>
using namespace std;
int main()
{
  int A, B, count;
  cin >> A >> B;
  string check;
  count = 0;
  for(int i=A; i <= B; ++i){
    check = to_string(i);
    if(check[0] == check[4] && check[1] == check[3]){
      count++;
    }
  }
  cout << count << endl;

  return 0;
}
