#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
    string N, N_;
    cin >> N;
    N_ = N;

    reverse(N_.begin(), N_.end());

    if(N_ == N){
      cout << "Yes";
    }else{
      cout << "No";
    }

    return 0;
}
