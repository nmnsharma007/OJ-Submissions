#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin >> n >> m;
	vector<pair<int,int>> cond(m);
	for(int i = 0; i < m;++i){
		cin >> cond[i].first >> cond[i].second;
	}
	int k;
	cin >> k;
	vector<pair<int,int> > choices(k);
	for(int i = 0; i < k;++i){
		cin >> choices[i].first >> choices[i].second;
	}
	int ans = 0;
	for(int mask = 0;mask < (1 << k);++mask){
		int temp = mask;
		vector<int> marked(n+1,0);
		for(int i = 0; i < k;++i){
			int a = choices[i].first;
			int b = choices[i].second;
			if(temp&1)
				++marked[b];
			else
				++marked[a];
			temp >>= 1;
		}
		int cnt = 0;
		for(int i = 0; i < m;++i){
			int a = cond[i].first;
			int b = cond[i].second;
			if(marked[a] && marked[b])
				++cnt;
		}
		ans = max(ans,cnt);
	}
	cout << ans << "\n";
}
