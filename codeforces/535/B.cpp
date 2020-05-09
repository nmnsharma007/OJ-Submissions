#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int index = pow(2,n) - 1;
    for(int i=0;i<n;i++)
    {
        if(s[i] == '7')
            index = index + pow(2,n-i-1);
    }
    cout << index;
}