#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2*1e5+5;
vector<int> adj[N];

void dfs(vector<int> &parent,int cur_node)
{
	for(int i = 0; i < (int)adj[cur_node].size();++i){
		int next_node = adj[cur_node][i];
		if(next_node != parent[cur_node]){
			parent[next_node] = cur_node;
			dfs(parent,next_node);
		}
	}
}

void dfs1(vector<ll> &ans,vector<int> &parent,int cur_node)
{
	for(int i = 0; i < (int)adj[cur_node].size();++i){
		int next_node = adj[cur_node][i];
		if(parent[cur_node] != next_node){
			ans[next_node] += ans[cur_node];
			dfs1(ans,parent,next_node);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<pair<int,int> > v;
	for(int i = 0; i < n-1;++i){
		int a,b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
		v.push_back({a,b});
	}
	vector<ll> ans(n+1,0LL);
	vector<int> parent(n+1,0);
	dfs(parent,1);
	int q;
	cin >> q;
	while(q--){
		int op,i,x;
		cin >> op >> i >> x;
		int a = v[i-1].first;
		int b = v[i-1].second;
		if(op == 1){
			if(b == parent[a]){
				ans[a] += x;
			}
			else{
				ans[1] += x;
				ans[b] -= x;
			}
		}
		else{
			if(b == parent[a]){
				ans[1] += x;
				ans[a] -= x;
			}
			else{
				ans[b] += x;
			}
		}
	}
	dfs1(ans,parent,1);
	for(int i = 1; i <= n;++i){
		cout << ans[i] << "\n";
	}
}
