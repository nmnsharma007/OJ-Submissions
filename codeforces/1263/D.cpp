#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2*1e5+5;
vector<int> adj[N];
vector<bool> visited(N,false);

void dfs(int cur_node)
{
	visited[cur_node] = true;
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
	int n;
	cin >> n;
	string s[n];
	for(int i = 0; i < n;++i){
		cin >> s[i];
	}
	for(char i = 'a';i <= 'z';++i){
		int node = 0;
		for(int j = 0; j < n;++j){
			for(int k = 0; k <(int)s[j].length();++k){
				if(s[j][k] == i){
					if(node != 0){
						adj[node].push_back(j+1);
						adj[j+1].push_back(node);
					}
					else
						node = j+1;
				}
			}
		}
	}
	int ans = 0;
	for(int i = 1; i <= n;++i){
		if(!visited[i]){
			++ans;
			dfs(i);
		}
	}
	cout << ans << "\n";
}
