#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5+5;
vector<int> adj[N];
vector<int> v1,v2;
vector<int> res(N);
bool visited[N];
int flag = 1;
void dfs(int cur_node,int assign)
{
	visited[cur_node] = true;
	if(assign == 1)
		v2.push_back(cur_node);
	else
		v1.push_back(cur_node);
	res[cur_node] = assign;
	for(int i = 0; i < (int)adj[cur_node].size();++i){
		int next_node = adj[cur_node][i];
		if(!visited[next_node]){
			dfs(next_node,1 - assign);
		}
		else if(res[next_node] == res[cur_node]){
			flag = 0;
			return;
		}
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
	for(int i = 1; i <= n;++i){
		if(!visited[i]){
			dfs(i,1);
		}
	}
	if(flag == 0)
		cout << "-1\n";
	else{
		cout << v1.size() << "\n";
		for(auto x : v1)
			cout << x << " ";
		cout << "\n";
		cout << v2.size() << "\n";
		for(auto x : v2)
			cout << x << " ";
		cout << "\n";
	}
}
