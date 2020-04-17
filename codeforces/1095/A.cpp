#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    string ans = "";
    cin >> s;
    int i = 0;
    int k = 1;
    while(i < n)
    {
        ans += s[i];
        i += k;
        k++;
    }
    cout << ans;
}