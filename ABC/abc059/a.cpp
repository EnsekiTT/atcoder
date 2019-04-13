#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    char c1 = s1[0] - 'a' + 'A';
    char c2 = s2[0] - 'a' + 'A';
    char c3 = s3[0] - 'a' + 'A';

    cout << c1 << c2 << c3 << endl;

    return 0;
}
