#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2 * 1e5+5;
vector<int> adj[N];
bool visited[N];
stack<int> rec;
void dfs(int cur_node)
{
	visited[cur_node] = true;
	for(int i = 0; i < (int)adj[cur_node].size();++i){
		int next_node = adj[cur_node][i];
		if(!visited[next_node])
			dfs(next_node);
	}
	rec.push(cur_node);
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	ll arr[n+1],b[n+1];
	for(int i = 1; i <= n;++i){
		cin >> arr[i];
	}
	for(int i = 1; i <= n;++i){
		cin >> b[i];
	}
	for(int i = 1; i <= n;++i){
		int u = i;
		int v = b[i];
		if(v != -1){
			adj[u].push_back(v);
		}
	}
	memset(visited,false,sizeof(visited));
	for(int i = 1; i <= n;++i){
		if(!visited[i])
			dfs(i);
	}
	ll ans = 0;
	stack<int> temp;
	vector<int> pos;
	while(!rec.empty()){
		int node = rec.top();
		rec.pop();
		if(arr[node] < 0){
			temp.push(node);
			continue;
		}
		ans += arr[node];
		pos.push_back(node);
		if(b[node] != -1){
			arr[b[node]] += arr[node];
		}
	}
	while(!temp.empty()){
		int node = temp.top();
		temp.pop();
		pos.push_back(node);
		ans += arr[node];
	}
	cout << ans << "\n";
	for(auto x : pos)
		cout << x << " ";
	cout << "\n";
}
