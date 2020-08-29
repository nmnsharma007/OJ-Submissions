#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5+5;
vector<int> adj[N];
bool visited[N];
int cnt = 0;
void dfs(int cur_node)
{
	visited[cur_node] = true;
	++cnt;
	for(int i = 0; i < (int)adj[cur_node].size();++i){
		int next_node = adj[cur_node][i];
		if(!visited[next_node])
			dfs(next_node);
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	
	int n,m;
	cin >> n >> m;
	for(int i = 0; i < m;++i){
		int u,v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	memset(visited,false,sizeof(visited));
	int ans = 0;
	for(int i = 1; i <= n;++i){
		if(!visited[i]){
			cnt = 0;
			dfs(i);
			ans = max(ans,cnt);
		}
	}
	cout << ans << "\n";
}
