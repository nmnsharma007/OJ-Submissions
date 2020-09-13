#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5+5;
vector<int> adj[N];
vector<int> sz(N);
vector<int> centroid;
int req_node,n;
pair<int,int> p;

void dfs(int cur_node,int parent)
{
	sz[cur_node] = 1;
	bool is_centroid = true;
	for(int i = 0; i < (int)adj[cur_node].size();++i){
		int next_node = adj[cur_node][i];
		if(next_node == parent)
			continue;
		dfs(next_node,cur_node);
		sz[cur_node] += sz[next_node];
		if(sz[next_node] > n/2)
			is_centroid = false;
	}
	if(n-sz[cur_node] > n/2)
		is_centroid = false;
	if(is_centroid)
		centroid.push_back(cur_node);
}

void dfs1(int cur_node,int parent)
{
	if(adj[cur_node].size() == 1 && req_node != cur_node){
		p = {cur_node,parent};
		return;
	}
	for(int i = 0; i < (int)adj[cur_node].size();++i){
		int next_node = adj[cur_node][i];
		if(next_node == parent)
			continue;
		dfs1(next_node,cur_node);
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= n;++i){
			adj[i].clear();
			sz[i] = 0;
		}
		centroid.clear();
		for(int i = 1; i <= n-1;++i){
			int u,v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		dfs(1,0);
		if(centroid.size() == 1){
			int node = centroid[0];
			cout << node << " " << adj[node][0] << "\n";
			cout << node << " " << adj[node][0] << "\n";
		}
		else{
			int node1 = centroid[0];
			int node2 = centroid[1];
			req_node = node1;
			dfs1(node1,node2);
			cout << p.first << " " << p.second << "\n";
			cout << node2 << " " << p.first << "\n";
		}
	}
}
