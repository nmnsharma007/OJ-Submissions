#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        bool has_zero = false;
        int ans = 0,cnt = 0, mini = 200;
        for(int i = 0; i < n;++i){
            for(int j = 0; j < m;++j){
                int x;
                cin >> x;
                if(x < 0)
                    ++cnt;
                if(x == 0)
                    has_zero = true;
                mini = min(mini,abs(x));
                ans += abs(x);
            }
        }
        if(cnt % 2 == 0)
            cout << ans << "\n";
        else if(has_zero)
            cout << ans << "\n";
        else{
            ans -= 2*mini;
            cout << ans << "\n";
        }
    }
}