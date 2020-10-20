#include<bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin >> n;
	ll C[n+1][n+1];
	memset(C,0,sizeof(C));
	for(int i = 1; i <= n;++i){
		C[i][0] = 1;
		for(int j = 1; j <= n;++j){
			if(i == j)
				C[i][i] = 1;
			else
				C[i][j] = C[i-1][j] + C[i-1][j-1];
		}
	}
	ll fact[n+1];
	fact[0] = 1;
	for(int i = 1; i <= n/2;++i){
		fact[i] = fact[i-1] * (ll)i;
	}
	ll ans = C[n][n/2];
	ans = ans * fact[n/2-1] * fact[n/2-1];
	cout << ans/2LL << "\n";
}
