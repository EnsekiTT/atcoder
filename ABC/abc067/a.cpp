#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;

    if(A % 3 == 0 && A >= 3){
      cout << "Possible";
    }else if(B % 3 == 0 && B >= 3){
      cout << "Possible";
    }else if((A+B)%3 == 0 && A+B >= 3){
      cout << "Possible";
    }else{
      cout << "Impossible";
    }
    cout << endl;

    return 0;
}
