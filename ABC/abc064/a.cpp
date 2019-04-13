#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;

    if(A+B >= 10){
      cout << "error";
    }else{
      cout << A+B;
    }
    cout << endl;

    return 0;
}
