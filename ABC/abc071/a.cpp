#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
    int x, a, b;
    cin >> x >> a >> b;

    if(abs(x-a) > abs(x-b)){
      cout << 'B';
    }else{
      cout << 'A';
    }
    cout << endl;

    return 0;
}
