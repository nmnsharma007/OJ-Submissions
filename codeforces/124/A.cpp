#include<iostream>
using namespace std;
int main()
{
    int n,a,b;
    cin >> n >> a >> b;
    cout << n-max(n-b,a+1) + 1;
}
