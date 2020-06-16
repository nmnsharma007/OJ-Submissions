#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n,m;
    cin >> n >> m;
    ll dif[n];
    ll sum = 0;
    for(int i=0;i<n;i++){
        ll x,y;
        cin >> x >> y;
        dif[i] = x-y;
        sum += x;
        
    }
    if(sum <= m)
        cout << "0\n";
    else{
        int count = 0;
        sort(dif,dif+n);
        for(int i=n-1;i>=0;i--){
            sum -= dif[i];
            count++;
            if(sum <= m)
                break;
        }
        if(sum <= m)
            cout << count << "\n";
        else
            cout << "-1\n";
    }
}