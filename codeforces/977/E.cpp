#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2 * 1e5 + 5;
vector<int> adj[N];
vector<bool> visited(N,false);
vector<int> cycles[N];
int ans = 0;
int components;
int flag;
void dfs(int cur_node)
{
	visited[cur_node] = true;
	cycles[components].push_back(cur_node);
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
	components = 1;
	for(int i = 1; i <= n;++i){
		if(!visited[i]){
			dfs(i);
			++components;
		}
	}
	for(int i = 1; i < components;++i){
		if(cycles[i].size() >= 3){
			int flag = 1;
			for(int j = 0; j < (int)cycles[i].size();++j){
				int node = cycles[i][j];
				if(adj[node].size() != 2){
					flag = 0;
					break;
				}
			}
			if(flag == 1)
				++ans;
		}
	}
	cout << ans << "\n";
}
