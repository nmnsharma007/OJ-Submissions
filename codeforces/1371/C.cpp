#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while(t--){
        ll a,b,n,m;
        cin >> a >> b >> n >> m;
        if(m <= min(a,b) && n+m <= a+b){
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}