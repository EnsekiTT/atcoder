#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
    string C_1;
    string C_2;

    cin >> C_1;
    cin >> C_2;

    reverse(C_2.begin(), C_2.end());
    if(C_1 == C_2){
      cout << "YES";
    }else{
      cout << "NO";
    }


    return 0;
}
