#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
    int a, b, c;
    int sm[3];
    cin >> a >> b >> c;

    sm[0] = a+b;
    sm[1] = b+c;
    sm[2] = c+a;

    cout << *min_element(sm, sm+3) << endl;

    return 0;
}
