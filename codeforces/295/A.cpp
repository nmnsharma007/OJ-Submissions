#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m,k;
	cin >> n >> m >> k;
	ll arr[n];
	for(int i = 0; i < n;++i){
		cin >> arr[i];
	}
	vector<pair<pair<int,int>,ll> > occur;
	vector<int> freq(m+1,0);
	for(int i = 0; i < m;++i){
		int l,r;
		ll d;
		cin >> l >> r >> d;
		--l,--r;
		occur.push_back({{l,r},d});
	}
	for(int i = 0; i < k;++i){
		int x,y;
		cin >> x >> y;
		--x,--y;
		++freq[x];
		--freq[y+1];
	}
	for(int i = 1; i < m;++i){
		freq[i] += freq[i-1];
	}
	vector<ll> temp(n+1,0);
	for(int i = 0; i < m;++i){
		ll times = (ll)freq[i];
		int l = occur[i].first.first;
		int r = occur[i].first.second;
		int d = occur[i].second;
		temp[l] += times * d;
		temp[r+1] -= times*d;
	}
	for(int i = 1; i < n;++i){
		temp[i] += temp[i-1];
	}
	for(int i = 0; i < n;++i){
		cout << arr[i] + temp[i] << " ";
	}
	cout << "\n";
}
