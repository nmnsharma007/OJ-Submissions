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
		ll n,k;
		cin >> n >> k;
		ll l1,r1,l2,r2;
		cin >> l1 >> r1 >> l2 >> r2;
		ll initial = n * (min(r1,r2) - max(l1,l2));
		if(initial >= 0){
			ll need = max(0LL,k-initial);
			ll ans = 0;
			if(need){
				ll newer = n * (max(r1,r2) - min(l1,l2));
				if(newer < k){
					ans = newer - initial + (k-newer) * 2LL;
				}
				else{
					ans = k - initial;
				}
			}
			cout << ans << "\n";
		}
		else{
			ll ans = 1e16;
			ll invest = max(l1,l2) - min(r1,r2);
			for(int i = 1; i <= n;++i){
				ll cur_ans = invest * i;
				ll moves = (max(r2,r1) - min(l1,l2)) * i;
				cur_ans += min(k,moves) + max(0LL,k-moves) * 2LL;
				ans = min(ans,cur_ans);
			}
			cout << ans << "\n";
		}
	}
}