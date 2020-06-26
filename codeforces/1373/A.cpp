#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while(t--){
        ll a,b,c;
        cin >> a >> b >> c;
        if(a >= c){
            cout << "-1 2\n";
        }
        else{
            cout << "1 ";
            if(b*a > c)
                cout << b << "\n";
            else
                cout << "-1\n";
        }
    }
}