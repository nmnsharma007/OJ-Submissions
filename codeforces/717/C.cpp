#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e4+7;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<ll> a(n);
	for(int i = 0; i < n;++i){
		cin >> a[i];
	}
	sort(a.begin(),a.end());
	ll ans = 0;
	for(int i = 0; i < n;++i){
		ans = (ans+a[i]*a[n-i-1])%MOD;
	}
	cout << ans << "\n";
}
