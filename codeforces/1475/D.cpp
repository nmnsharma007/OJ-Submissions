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
		vector<pair<ll,int>> v(n+1,{0,0});
		for(int i = 0; i < n;++i){
			ll a;
			cin >> a;
			v[i+1] = {a,0};
		}
		for(int i = 0; i < n;++i){
			int b;
			cin >> b;
			v[i+1] = {v[i+1].first,b};
		}
		vector<ll> v1,v2;
		v1.push_back(0);
		v2.push_back(0);
		for(int i = 1; i <= n;++i){
			if(v[i].second == 1)
				v1.push_back(v[i].first);
			else
				v2.push_back(v[i].first);
		}
		sort(v1.begin()+1,v1.end(),greater<ll>());
		sort(v2.begin()+1,v2.end(),greater<ll>());
		int ans = 1e8;
		for(int i = 1; i < (int)v2.size();++i){
			v2[i] += v2[i-1];
		}
		for(int i = 1; i < (int)v1.size();++i){
			v1[i] += v1[i-1];
		}
		for(int i = 0; i < (int)v2.size();++i){
			ll sum = v2[i];
			int index = lower_bound(v1.begin(),v1.end(),(ll)m-sum) - v1.begin();
			if(index >= (int)v1.size())
				continue;
			ans = min(ans,i*2+index);
		}
		if(ans == 1e8)
			ans = -1;
		cout << ans << "\n";
	}
}
