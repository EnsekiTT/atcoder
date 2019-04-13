#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
    string N;

    cin >> N;

    if(N.find("9") != string::npos){
      cout << "Yes";
    }else{
      cout << "No";
    }
    cout  << endl;

    return 0;
}
