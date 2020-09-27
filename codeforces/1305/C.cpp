#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n,m;
	cin >> n >> m;
	vector<ll> v(n);
	for(int i = 0; i < n;++i){
		cin >> v[i];
	}
	if(n > m)
		cout << "0\n";
	else{
		ll ans = 1;
		for(int i = 0; i < n;++i){
			for(int j = i+1; j < n;++j){
				ans = (ans * abs(v[i]-v[j]))%m;
			}
		}
		cout << ans << "\n";
	}
} 
