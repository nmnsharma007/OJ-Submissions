#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n,d,m;
	cin >> n >> d >> m;
	vector<ll> big,small;
	for(int i = 0; i < n;++i){
		ll x;
		cin >> x;
		if(x > m)
			big.push_back(x);
		else
			small.push_back(x);
	}
	sort(big.begin(),big.end(),greater<ll>());
	sort(small.begin(),small.end(),greater<ll>());
	for(int i = 1; i < (int)big.size();++i){
		big[i] += big[i-1];
	}
	for(int i = 1; i < (int)small.size();++i){
		small[i] += small[i-1];
	}
	ll ans = 0,sum;
	if(big.size() == 0){
		cout << small[small.size()-1] << "\n";
		return 0;
	}
	for(int i = 0; i < (int)big.size();++i){
		ll skip = (ll)i * d;
		sum = 0;
		if(skip > (ll)((int)big.size() - i - 1 + small.size()))
			break;
		sum = big[i];
		ll need = skip - (big.size()-i-1);
		if(need <= 0){
			if(small.size() > 0)
				sum += small[small.size()-1];
		}
		else{
			if(small.size() > 0 && small.size()-need >= 1)
				sum += small[small.size()-need-1];
		}
		ans = max(ans,sum);
	}
	cout << ans << "\n";
}
