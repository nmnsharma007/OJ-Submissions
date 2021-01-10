#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2*1e5+5;
vector<int> adj[N];
bool visited[N];
vector<ll> values(N,-1e14);
ll arr[N];

void dfs(int cur_node){
	visited[cur_node] = true;
	for(int i = 0; i < (int)adj[cur_node].size();++i){
		int next_node = adj[cur_node][i];
		if(!visited[next_node]){
			dfs(next_node);
		}
			values[cur_node] = max(arr[next_node],values[cur_node]);
			values[cur_node] = max(values[cur_node],values[next_node]);
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin >> n >> m;
	for(int i = 1; i <= n;++i){
		cin >> arr[i];
	}
	for(int i = 0; i < m;++i){
		int x,y;
		cin >> x >> y;
		adj[x].push_back(y);
	}
	memset(visited,false,sizeof(visited));
	for(int i = 1; i <= n;++i){
		if(!visited[i]){
			dfs(i);
		}
	}
	ll ans = -1e18;
	for(int i = 1; i <= n;++i){
		if(values[i] != -1){
			ans = max(ans,values[i]-arr[i]);
		}
	}
	cout << ans << "\n";
}
