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
		ll a[m];
		vector<pair<ll,ll> > b(m);
		for(int i = 0; i < m;++i){
			ll x,y;
			cin >> x >> y;
			a[i] = x;
			b[i] = {y,x};
		}
		sort(b.begin(),b.end());
		sort(a,a+m);
		ll suf[m];
		suf[m-1] = a[m-1];
		for(int i = m-2; i >= 0;--i){
			suf[i] = suf[i+1] + a[i];
		}
		ll ans = 0;
		for(int i = m-1; i >= 0;--i){
			ll cur = b[i].first;
			int index = lower_bound(a,a+m,cur) - a;
			if(index >= m){
				ans = max(ans,(n-1) * b[i].first + b[i].second);
				continue;
			}
			ll cur_sum = suf[index];
			if(m-index == n){
				ans = max(ans,cur_sum);
			}
			else if(m-index > n){
				ans = max(ans,suf[m-n]);
			}
			else{
				int need = n-(m - index);
				if(b[i].second >= b[i].first){
					cur_sum += need * b[i].first;
				}
				else{
					cur_sum += b[i].second;
					--need;
					if(need)
						cur_sum += need * b[i].first;
				}
				ans = max(ans,cur_sum);
			}
		}
		cout << ans << "\n";
	}
}