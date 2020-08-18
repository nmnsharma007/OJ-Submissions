#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,k;
	cin >> n >> k;
	vector<ll> v1,v2,v3;
	v1.push_back(0);
	v2.push_back(0);
	v3.push_back(0);
	for(int i = 0; i < n;++i){
		int a,b;
		ll t;
		cin >> t >> a >> b;
		if(a == 1 && b == 1)
			v1.push_back(t);
		else if(a == 1)
			v2.push_back(t);
		else if(b == 1)
			v3.push_back(t);
	}
	int f1 = v1.size();
	int f2 = v2.size();
	int f3 = v3.size();
	ll ans = 1e14;
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	sort(v3.begin(),v3.end());
	for(int i = 1; i < f1;++i){
		v1[i] += v1[i-1];
	}
	for(int i = 1; i < f2;++i){
		v2[i] += v2[i-1];
	}
	for(int i = 1; i < f3;++i){
		v3[i] += v3[i-1];
	}
	for(int take = 0; take < min(f1,k+1);++take){
		ll sum = v1[take];
		int need = k - take;
		if(need >= f2 || need >= f3)
			continue;
		sum = sum + v2[need] + v3[need];
		ans = min(ans,sum);
	}
	if(ans == 1e14)
		ans = -1;
	cout << ans << "\n";
}
