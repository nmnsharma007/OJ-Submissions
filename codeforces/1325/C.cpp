#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<pair<int,int>> edges;
	int freq[n+1];
	memset(freq,0,sizeof(freq));
	for(int i = 0; i < n-1;++i){
		int u,v;
		cin >> u >> v;
		edges.push_back({u,v});
		++freq[u];
		++freq[v];
	}
	int weight = 0;
	vector<int> ans(n-1);
	for(int i = 0; i < (int)edges.size();++i){
		int u = edges[i].first;
		int v = edges[i].second;
		if(freq[v] == 1)
			ans[i] = weight++;
		else if(freq[u] == 1)
			ans[i] = weight++;
	}
	for(int i = 0; i < (int)edges.size();++i){
		int u = edges[i].first;
		int v = edges[i].second;
		if(freq[u] != 1 && freq[v] != 1){
			ans[i] = weight++;
		}
	}
	for(auto x : ans)
		cout << x << "\n";
}