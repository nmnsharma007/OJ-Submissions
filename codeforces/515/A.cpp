#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,s;
    cin >> a >> b >> s;
    a = abs(a);
    b = abs(b);
    long long int temp = s-(a+b);
    if(temp < 0 || temp%2 == 1)
        cout << "No";
    else
        cout << "Yes";
}