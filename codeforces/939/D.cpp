#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<int> adj[26];
vector<pair<char,char> > ans;
bool visited[26];

void dfs(int cur_node,int parent){
	visited[cur_node] = true;
	if(cur_node != parent)
		ans.push_back({char(parent+'a'),char(cur_node+'a')});
	for(int i = 0; i < (int)adj[cur_node].size();++i){
		int next_node = adj[cur_node][i];
		if(!visited[next_node])
			dfs(next_node,parent);
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	string a,b;
	cin >> a >> b;
	memset(visited,false,sizeof(visited));
	vector<int> freq(26,0);
	for(int i = 0; i < n;++i){
		if(a[i] == b[i])
			continue;
		++freq[a[i]-'a'];
		++freq[b[i]-'a'];
		adj[a[i]-'a'].push_back(b[i]-'a');
		adj[b[i]-'a'].push_back(a[i]-'a');
	}
	for(int i = 0; i < 26;++i){
		if(freq[i] == 0)
			continue;
		dfs(i,i);
	}
	cout << (int)ans.size() << "\n";
	for(auto x : ans){
		cout << x.first << " " << x.second << "\n";
	}
}
