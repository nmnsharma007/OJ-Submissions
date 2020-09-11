#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5+5;
vector<int> adj[N];
vector<int> depth(N,0);
int diameter = 0;

int dfs(int cur_node,int parent){
	int max_len = 0;
	for(int i = 0; i < (int)adj[cur_node].size();++i){
		int next_node = adj[cur_node][i];
		if(next_node == parent)
			continue;
		depth[next_node] = depth[cur_node] + 1;
		int cur_len = 1 + dfs(next_node,cur_node);
		diameter = max(diameter,cur_len + max_len);
		max_len = max(max_len,cur_len);
	}
	return max_len;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n,a,b,da,db;
		cin >> n >> a >> b >> da >> db;
		for(int i = 1; i <= n;++i){
			adj[i].clear();
			depth[i] = 0;
		}
		for(int i = 0; i < n-1;++i){
			int u,v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		diameter = 0;
		dfs(a,0);
		if(depth[b] <= da || diameter <= 2 * da)
			cout << "Alice\n";
		else if(da * 2 < db)
			cout << "Bob\n";
		else
			cout << "Alice\n";
	}
}
