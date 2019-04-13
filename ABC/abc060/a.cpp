#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
    string A, B, C;
    cin >> A >> B >> C;

    if(*(A.end()-1) == *B.begin() && *(B.end()-1) == *C.begin()){
      cout << "YES";
    }else{
      cout << "NO";
    }
    cout << endl;
    return 0;
}
