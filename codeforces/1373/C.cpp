#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        ll ans = 0;
        ll count = 0;
        for(int i=0;i<(int)s.length();i++){
            if(s[i] == '+')
                count++;
            else
                count--;
            if(count < 0){
                ans += (ll)(i+1);
                count = 0;
            }
        }
        ans += (ll)s.length();
        cout << ans << "\n";
    }
}