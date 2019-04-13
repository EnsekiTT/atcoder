#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
    int X, A, B;
    cin >> X >> A >> B;

    if(B-A <= 0){
      cout << "delicious";
    }else if(B-A > 0 && B-A <= X){
      cout << "safe";
    }else{
      cout << "dangerous";
    }

    cout << endl;

    return 0;
}
