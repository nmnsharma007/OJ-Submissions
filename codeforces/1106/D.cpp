#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin >> n >> m;
	vector<int> adj[n+1];
	for(int i = 0; i < m;++i){
		int u,v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}	
	vector<int> ans;
	priority_queue<int,vector<int>,greater<int>> pq;
	pq.push(1);
	vector<bool> visited(n+1,false);
	while(!pq.empty()){
		int node = pq.top();
		pq.pop();
		if(visited[node])
			continue;
		visited[node] = true;
		ans.push_back(node);
		for(int i = 0; i < (int)adj[node].size();++i){
			int next_node = adj[node][i];
			pq.push(next_node);
		}
	}
	for(auto x : ans)
		cout << x << " ";
	cout << "\n";
}
