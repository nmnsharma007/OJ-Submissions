#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
const int N = 1e5+5;
vector<int> adj[N];
vector<int> adjr[N];
ll cost[N];
bool visited[N];
stack<int> finish;
vector<int> ans[N];
int components = 1;
void dfs(int cur_node)
{
	visited[cur_node] = true;
	for(int i = 0; i < (int)adj[cur_node].size();++i){
		int next_node = adj[cur_node][i];
		if(!visited[next_node])
			dfs(next_node);
	}
	finish.push(cur_node);
}
void dfs1(int cur_node)
{
	visited[cur_node] = true;
	ans[components].push_back(cur_node);
	for(int i = 0; i < (int)adjr[cur_node].size();++i){
		int next_node = adjr[cur_node][i];
		if(!visited[next_node])
			dfs1(next_node);
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for(int i = 1; i <= n;++i){
		cin >> cost[i];
	}
	int m;
	cin >> m;
	for(int i = 0; i < m;++i){
		int u,v;
		cin >> u >> v;
		adj[u].push_back(v);
		adjr[v].push_back(u);
	}
	memset(visited,false,sizeof(visited));
	for(int i = 1; i <= n;++i){
		if(!visited[i])
			dfs(i);
	}
	memset(visited,false,sizeof(visited));
	while(!finish.empty()){
		int cur_node = finish.top();
		finish.pop();
		if(!visited[cur_node]){
			dfs1(cur_node);
			++components;
		}
	}
	ll res = 0;
	ll num = 1;
	for(int i = 1; i < components;++i){
		ll tempc = cost[ans[i][0]];
		ll count = 1;
		for(int j = 1; j < (int)ans[i].size();++j){
			int node = ans[i][j];
			if(cost[node] == tempc){
				++count;
			}
			else if(cost[node] < tempc){
				count = 1;
				tempc = cost[node];
			}
		}
		res += tempc;
		num = (num * count)%MOD;
	}
	cout << res << " " << num << "\n";
}
