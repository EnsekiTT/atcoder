#include <iostream>

using namespace std;

int main(){
  int N;
  int A, B;
  cin >> N;
  if(N == 1){
    cout << "Hello World" << endl;
  }else if(N == 2){
    cin >> A;
    cin >> B;
    cout << A + B << endl;
  }

  return 0;
}
