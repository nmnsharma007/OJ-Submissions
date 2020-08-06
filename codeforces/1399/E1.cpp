#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5+5;
vector<int> adj[N];
vector<pair<int,int> > edge;
vector<pair<ll,int> > edges(N);
ll weights[N];
vector<int> parent(N);
vector<int> leaves(N);
void dfs(int cur_node)
{
	leaves[cur_node] = 0;
	for(int i = 0; i < (int)adj[cur_node].size();++i){
		int next_node = adj[cur_node][i];
		if(next_node == parent[cur_node])
			continue;
		parent[next_node] = cur_node;
		dfs(next_node);
	   	leaves[cur_node] += leaves[next_node];
	}
	if(leaves[cur_node] == 0)
		leaves[cur_node] = 1;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		ll s;
		int num = 1;
		map<pair<int,int>,int> mp;
		edge.clear();
		cin >> n >> s;
		for(int i = 1; i <= n;++i){
			adj[i].clear();
		}
		for(int i = 1; i <= n-1;++i){
			int u,v;
			ll w;
			cin >> u >> v >> w;
			adj[u].push_back(v);
			adj[v].push_back(u);
			mp[{u,v}] = num;
			mp[{v,u}] = num;
			weights[num] = w;
			edge.push_back({u,v});
			++num;
		}
		parent[1] = 1;
		dfs(1);
		for(int i = 0; i < n-1;++i){
			int u = edge[i].first;
			int v = edge[i].second;
			ll w = weights[mp[{u,v}]];
			if(u == parent[v]){
				int l = leaves[v];
				edges[i+1] = {w,l};
			}
			else{
				int l = leaves[u];
				edges[i+1] = {w,l};
			}
		}
		ll sum = 0;
		priority_queue<pair<ll,int> > pq;
		for(int i = 1; i <= n-1;++i){
			ll w = edges[i].first;
			ll l = (ll)edges[i].second;
			sum += w * l;
			ll dif = (w - (w/2LL)) * l;
			pq.push({dif,i});
		}
		int ans = 0;
		while(sum > s){
			ll dif = pq.top().first;
			int pos = pq.top().second;
			pq.pop();
			ll w = edges[pos].first;
			ll l = (ll)edges[pos].second;
			sum -= w * l;
			w /= 2LL;
			dif = (w-(w/2LL)) * l;
			edges[pos] = {w,l};
			++ans;
			if(w == 0)
				continue;
			pq.push({dif,pos});
			sum += w * l;
		}
		cout << ans << "\n";
	}
	return 0;
}