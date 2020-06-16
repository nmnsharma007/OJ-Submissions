#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";
    int flag = 0;
    for(int i=0;i<n-1;i++){
        if(s[i] == s[i+1])
            continue;
        else{
            flag = 1;
            ans += s[i];
            ans += s[i+1];
            break;
        }
    }
    if(flag == 0)
        cout << "NO\n";
    else{
        cout << "YES\n";
        cout << ans << "\n";
    }
}