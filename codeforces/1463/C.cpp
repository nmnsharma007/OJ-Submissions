#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int sgn(ll x){
	if(x > 0)
		return 1;
	if(x < 0)
		return -1;
	return 0;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		ll t[n+1],x[n+1];
		t[n] = 1e15,x[n] = 0;
		for(int i = 0; i < n;++i){
			cin >> t[i] >> x[i];
		}
		vector<ll> pos(n+1);
		pos[n] = 1e17;
		ll cur = 0,next = 0,curt = 0;
		for(int i = 0; i <= n;++i){
			ll dx = next-cur;
			ll dt = t[i]-curt;
			int dir = sgn(dx);
			ll steps = min(abs(dx),dt);
			cur = cur + dir * steps;
			if(cur == next){
				next = x[i];
			}
			pos[i] = cur;
			curt = t[i];
		}
		int ans = 0;
		for(int i = 0; i < n;++i){
			if(x[i] >= min(pos[i],pos[i+1]) && x[i] <= max(pos[i],pos[i+1]))
				++ans;
		}
		cout << ans << "\n";
	}
}
