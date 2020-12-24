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
		ll p,f;
		cin >> p >> f;
		ll cnts,cntw;
		cin >> cnts >> cntw;
		ll s,w;
		cin >> s >> w;
		ll ans = 0;
		for(int i = 0; i <= min(p/s,cnts);++i){
			ll weight = p - i*s;
			ll taken = min(cntw,weight/w);
			ll have = max(0LL,cntw-taken);
			ll give = min(have,f/w);
			ll items = min(cnts-i,(f-give*w)/s);
			ans = max(ans,i+items+give+taken);
		}
		for(int i = 0; i <= min(p/w,cntw);++i){
			ll weight = p - i*w;
			ll taken = min(cnts,weight/s);
			ll have = max(0LL,cnts-taken);
			ll give = min(have,f/s);
			ll items = min(cntw-i,(f-give*s)/w);
			ans = max(ans,i+items+give+taken);
		}
		cout << ans << "\n";
	}
}	
