#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<ll> a(n+1),pref(n+1,0LL);
	for(int i = 1; i <= n;++i){
		cin >> a[i];
	}
	sort(a.begin()+1,a.end());
	for(int i = 1; i <= n;++i){
		pref[i] = pref[i-1] + a[i];
	}
	ll ans = 0;
	for(int i = 1; i <= n;++i){
		ans = ans + pref[n]-pref[i] - (ll)(n-i)*a[i];
	}
	cout << ans << "\n";
}
