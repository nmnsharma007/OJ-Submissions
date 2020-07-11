#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while(t--){
        ll x;
        cin >> x;
        int flag = 0;
        for(int i = 1;i <= 6;i++){
            ll temp = x - i;
            if(temp%14 == 0 && temp != 0)
                flag = 1;
        }
        if(flag == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}