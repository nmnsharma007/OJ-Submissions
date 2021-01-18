#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2*1e5 + 5;
vector<int> adj[N];

void dfs(vector<int> &val,vector<bool> &visited,int cur_node){
	visited[cur_node] = true;
	for(int i = 0; i < (int)adj[cur_node].size();++i){
		int next_node = adj[cur_node][i];
		if(!visited[next_node]){
			val[next_node] = 1 - val[cur_node];
			dfs(val,visited,next_node);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> val(n+1,-1);
	vector<bool> visited(n+1,false);
	for(int i = 0; i < n-1;++i){
		int u,v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	val[1] = 0;
	dfs(val,visited,1);
	int w = 0,b = 0;
	for(int i = 1; i <= n;++i){
		if(val[i] == 1)
			++b;
		else
			++w;
	}
	cout << min(w,b) - 1 << "\n";
}

