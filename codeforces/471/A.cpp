/*#include<bits/stdc++.h>
using namespace std;
vector<int> adj[100001];
bool visited[100001];
int ans[100001];
void bfs()
{
	queue<pair<int,int> > q;
	//pair<int,int> p = make_pair(1,1);
	ans[1] = 1;
	q.push({1,1});
	while(!q.empty())
	{
		pair<int,int> p = q.front();
		q.pop();
		visited[p.first] = true;
		ans[p.first] = p.second;
		for(int i=0;i<adj[p.first].size();i++)
		{
			p = make_pair(adj[p.first][i],p.first);
			if(visited[p.first] == false)
				q.push(p);
		}
	}
}
int main()
{
	memset(visited,false,sizeof(visited));
	memset(ans,0,sizeof(ans));
	int nodes,edges;
	cin >> nodes >> edges;
	for(int i=0;i<edges;i++)
	{
		int u,v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	bfs();
	cout << "Yes\n";
	for(int i=2;i<=nodes;i++)
		cout << ans[i] << "\n";
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v(6);
	for(int i=0;i<6;i++)
		cin >> v[i];
	sort(v.begin(),v.end());
	if(v[0] == v[1] && v[1] == v[2] && v[2] == v[3])
	{
		if(v[4] == v[5])
			cout << "Elephant";
		else
			cout << "Bear";
	}
	else if(v[1] == v[2] &&  v[2] == v[3] && v[3] == v[4])
	{
		if(v[0] < v[5])
			cout << "Bear";
		else
			cout << "Elephant";
	}
	else if(v[2] == v[3] && v[3] == v[4] && v[4] == v[5])
	{
		if(v[0] < v[1])
			cout << "Bear";
		else
			cout << "Elephant";
	}
	else
		cout << "Alien";
}
