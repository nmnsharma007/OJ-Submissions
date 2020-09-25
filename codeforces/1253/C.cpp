#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin >> n >> m;
	vector<ll> conc(n+1,0);
	for(int i = 1; i <= n;++i){
		cin >> conc[i];
	}
	sort(conc.begin(),conc.end());
	vector<ll> pref(n+1,0),res(n+1,0),ans(n+1,0);
	for(int i = 1; i <= n;++i){
		pref[i] =  pref[i-1] + conc[i];
	}
	for(int i = 1; i <= m;++i){
		res[i] = res[i-1] + conc[i];
		ans[i] = res[i];
	}
	for(int i = m+1; i <= n;++i){
		ans[i] = pref[i] + res[i-m];
		res[i] = ans[i];
	}
	for(int i = 1; i <= n;++i){
		cout << ans[i] << " ";
	}
	cout << "\n";
}
