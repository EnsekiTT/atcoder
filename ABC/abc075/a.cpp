#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
    int A,B,C;

    cin >> A >> B >> C;

    if(A == B){
      cout << C;
    }else if(B == C){
      cout << A;
    }else{
      cout << B;
    }
    cout << endl;

    return 0;
}
