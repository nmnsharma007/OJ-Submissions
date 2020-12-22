#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5+5;
vector<int> adj[N];
vector<int> rec_stack(N,false);
vector<int> visited(N,false);
int flag = 0;

void dfs(int cur_node){
	visited[cur_node] = true;
	rec_stack[cur_node] = true;
	for(int i = 0; i < (int)adj[cur_node].size();++i){
		int next_node = adj[cur_node][i];
		if(!visited[next_node]){
			dfs(next_node);
		}
		else if(rec_stack[next_node])
			flag = 1;
	}
	rec_stack[cur_node] = false;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		vector<pair<int,int> >  v;//storing the pairs
		map<int,int> col;
		map<int,int> points;
		int nodes = 1;//to count the number of nodes
		for(int i = 0; i < m;++i){
			int x,y;
			cin >> x >> y;
			col[y] = x;//storing the row corresponding to every column
			v.push_back({x,y});
			if(x != y){//if not on main diagonal
				points[x] = nodes;//storing the node number assigned
				++nodes;
			}
		}
		for(int i = 1; i < nodes;++i){
			adj[i].clear();//clearing up the lists
			rec_stack[i] = false;
			visited[i] = false;
		}
		for(int i = 0; i < m;++i){
			int x = v[i].first;
			int y = v[i].second;
			if(x == y)//if already on main diagonal
				continue;
			if(col[x] == 0 || col[x] == x)//if already on main diagonal or column is free
				continue;
			adj[points[x]].push_back(points[col[x]]);//make up the adjacency list 
		}
		int ans = nodes-1;//answer is atleast number of nodes
		for(int i = 1; i < nodes;++i){
			if(!visited[i]){
				flag = 0;
				dfs(i);
				if(flag)
					++ans;//if cycle existed
			}
		}
		cout << ans << "\n";
	}
}
