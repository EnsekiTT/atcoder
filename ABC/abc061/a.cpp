#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    if(C >= A && C <= B){
      cout << "Yes";
    }else{
      cout << "No";
    }
    cout << endl;

    return 0;
}
