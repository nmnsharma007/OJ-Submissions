#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n,m,k;
		cin >> n >> m >> k;
		vector<ll> freq(n+1,0LL);
		for(int i = 0; i < n;++i){
			int x;
			cin >> x;
			++freq[x];
		}
		vector<ll> pref(n+1,0LL);
		for(int i = 1; i <= n;++i){
			pref[i] = pref[i-1] + freq[i];
		}
		ll C[n+1][m+1];
		memset(C,0,sizeof(C));
		for(int i = 0; i <= n;++i){
			for(int j = 0; j <= min(i,m);++j){
				if(j == 0 || j == i)
					C[i][j] = 1;
				else
					C[i][j] = (C[i-1][j-1] + C[i-1][j])%MOD;
			}
		}
		ll ans = 0;
		for(int i = 1; i <= n;++i){
			ll val = freq[i];
			ll sum = pref[min(n,i+k)]-pref[i];
			for(int j = 1;j <= min((ll)m,freq[i]);++j){
				ans = (ans + (C[val][j] * C[sum][m-j])%MOD)%MOD;
			}
		}
		cout << ans << "\n";
	}
}
