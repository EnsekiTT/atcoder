#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
    int X, t;
    cin >> X >> t;

    cout << (X-t >=0 ? X-t : 0) << endl;

    return 0;
}
