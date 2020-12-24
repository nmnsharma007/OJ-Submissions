#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> adj[n+1];
	for(int i = 0; i < n-1;++i){
		int a,b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	vector<pair<int,int>> ans;
	int cnt = 0;
	int root = 0,deg = 0;
	for(int i = 1; i <= n;++i){
		if((int)adj[i].size() > deg){
			deg = adj[i].size();
			root = i;
		}
		if((int)adj[i].size() >= 3)
			++cnt;
	}
	if(cnt > 1)
		cout << "No\n";
	else{
		cout << "Yes\n";
		for(int i = 1; i <= n;++i){
			if(i == root)
				continue;
			if((int)adj[i].size() == 1)
				ans.push_back({root,i});
		}
		cout << (int)ans.size() << "\n";
		for(auto x : ans)
			cout << x.first << " " << x.second << "\n";
	}
}
