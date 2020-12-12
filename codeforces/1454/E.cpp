#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		set<int> adj[n+1];
		for(int i = 0; i < n;++i){
			int u,v;
			cin >> u >> v;
			adj[u].insert(v);
			adj[v].insert(u);
		}
		queue<int> q;
		for(int i = 1; i <= n;++i){
			if(adj[i].size() == 1)
				q.push(i);
		}
		vector<ll> cnt(n+1,1);
		while(!q.empty()){
			int cur_node = q.front();
			q.pop();
			if(adj[cur_node].size() != 1)
				continue;
			int parent = *adj[cur_node].begin();
			adj[parent].erase(cur_node);
			adj[cur_node].clear();
			cnt[parent] += cnt[cur_node];
			q.push(parent);
		}
		ll ans = 0;
		for(int node = 1; node <= n;++node){
			if(adj[node].size() != 2)
				continue;
			ans += (cnt[node]*(cnt[node]-1))/2LL + cnt[node] * ((ll)n-cnt[node]);
		}
		cout << ans << "\n";
	}
}
