#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 3000 + 5;
vector<int> adj[N];
int edge[N][N];
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m,k;
	cin >> n >> m >> k;
	for(int i = 0; i < m;++i){
		int x,y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	set<pair<pair<int,int>,int> > s;
	for(int i = 0; i < k;++i){
		int a,b,c;
		cin >> a >> b >> c;
		s.insert({{a,b},c});
	}
	pair<int,int> ans = {-1,-1};
	queue<pair<int,int> > q;
	q.push({1,1});
	edge[1][1] = 1;
	while(!q.empty()){
		int cur_node = q.front().second;
		int prev_node = q.front().first;
		q.pop();
		if(cur_node == n){
			ans = {prev_node,cur_node};
			break;
		}
		for(int i = 0; i < (int)adj[cur_node].size();++i){
			int next_node = adj[cur_node][i];
			if(edge[cur_node][next_node] || s.find({{prev_node,cur_node},next_node}) != s.end())
				continue;
			edge[cur_node][next_node] = prev_node;
			q.push({cur_node,next_node});
		}
	}
	if(ans.second == -1)
		puts("-1");
	else{
		vector<int> path;
		while(ans.second != 1){
			path.push_back(ans.second);
			ans = {edge[ans.first][ans.second],ans.first};
		}
		path.push_back(1);
		cout << path.size() - 1 << "\n";
		for(int i = path.size()-1; i >= 0;i--){
			cout << path[i] << " "; 
		}
		cout << "\n";
	}
}