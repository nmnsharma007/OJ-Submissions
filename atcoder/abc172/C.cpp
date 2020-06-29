        #include<bits/stdc++.h>
        using namespace std;
        using ll = long long;
        int main()
        {
            int n,m,k;
            cin >> n >> m >> k;
            vector<ll> a(n+1),b(m+1);
            for(int i=1;i<=n;i++){
                ll x;
                cin >> x;
                a[i] = a[i-1] + x;
            }
            for(int i=1;i<=m;i++){
                ll x;
                cin >> x;
                b[i] = b[i-1] + x;
            }
            int ans = 0;
            for(int i=0;i<=n;i++){
                ll temp = a[i];
                int index = upper_bound(b.begin(),b.end(),k-a[i]) - b.begin();
                index--;
                if(index >= 0 && b[index] <= (ll)k-a[i])
                  ans = max(ans,i+index);
                 //cout << index << "\n";
            }
            cout << ans << "\n";
        }