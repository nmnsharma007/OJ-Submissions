#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5+5;
const int MOD = 1e9+7;
vector<int> adj[N];
ll factors[N],contribution[N],sz[N];
vector<pair<int,int> > edge(N);
int k = 1;
void dfs(int cur_node,int parent,int n)
{
	sz[cur_node] = 1;
	for(int i = 0; i < (int)adj[cur_node].size();++i){
		int next_node = adj[cur_node][i];
		if(next_node == parent)
			continue;
		dfs(next_node,cur_node,n);
		sz[cur_node] += sz[next_node];
	}
	contribution[k++] = sz[cur_node] * ((ll)n - sz[cur_node]);
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		k = 1;
		for(int i = 1; i <= n;++i){
			adj[i].clear();
		}
		for(int i = 1; i <= n-1;++i){
			int u,v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
			edge[i] = {u,v};
		}
		int m;
		cin >> m;
		for(int i = 1; i <= m;++i){
			cin >> factors[i];
		}
		dfs(1,1,n);
		sort(contribution+1,contribution+n,greater<ll>());
		sort(factors+1,factors+m+1,greater<ll>());
		int edges = n-1;
		ll ans = 0;
//		for(int i = 1; i <= n-1;++i){
//			cout << "Contribution of edge " << i << " is : " << contribution[i] << "\n";
//		}
		if(edges <= m){
			int edge_pos = n-1;
			int fact_pos = m;
			for(int i = 1; i < edges;++i){
				ans = (ans + (contribution[edge_pos--] * factors[fact_pos--])%MOD)%MOD;
			}
			ll temp = 1;
			while(fact_pos > 0){
				temp = (temp * factors[fact_pos--])%MOD;
			}
			ans = (ans + (temp * contribution[1])%MOD)%MOD;
		}
		else{
			for(int i = 1; i <= m;++i){
				ans = (ans + (factors[i] * contribution[i])%MOD)%MOD;
			}
			for(int i = m+1; i <= n-1;++i){
				ans = (ans + contribution[i])%MOD;
			}
		}
		cout << ans << "\n";
	}
}
