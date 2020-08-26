#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 5e5+5;
vector<int> adj[N];
int components = 1;
int val[N];
int dp[N];
bool visited[N];
int dist[N];
void dfs(int cur_node)
{
	val[cur_node] = components;
	dp[cur_node] = 1;
	visited[cur_node] = true;
	for(int i = 0; i < (int)adj[cur_node].size();++i){
		int next_node=  adj[cur_node][i];
		if(!visited[next_node])
			dfs(next_node);
		else
			continue;
		dp[cur_node] += dp[next_node];
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin >> n >> m;
	for(int i = 1; i <= m;++i){
		int k;
		cin >> k;
		if(k == 0)
			continue;
		int u;
		cin >> u;
		for(int j = 0; j < k-1;++j){
			int v;
			cin >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
	}
	memset(visited,false,sizeof(visited));
	for(int i = 1; i <= n;++i){
		if(!visited[i]){
			dfs(i);
			dist[val[i]] = dp[i];
			++components;
		}
	}
	for(int i = 1; i <= n;++i){
		cout << dist[val[i]] << " ";
	}
	cout << "\n";
}
