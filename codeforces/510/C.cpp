#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 30;
vector<int> adj[N];
vector<bool> visited(N,false),rec_stack(N,false);
stack<int> top_sort;
int flag = 0;

void dfs(int cur_node)
{
	visited[cur_node] = true;
	rec_stack[cur_node] = true;
	for(int i = 0; i < (int)adj[cur_node].size();++i){
		int next_node = adj[cur_node][i];
		if(!visited[next_node])
			dfs(next_node);
		else if(rec_stack[next_node] == true){
			flag = 1;
			return;
		}
	}
	rec_stack[cur_node] = false;
	top_sort.push(cur_node);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	string arr[n];
	for(int i = 0; i < n;++i){
		cin >> arr[i];
	}
	for(int i = 0; i < n-1;++i){
		for(int j = 0; j < arr[i].length();++j){
			if(j >= arr[i+1].length()){
				flag = 1;
				break;
			}
			if(arr[i][j] == arr[i+1][j])
				continue;
			int from = arr[i][j] - 'a';
			int to = arr[i+1][j] - 'a';
			if(find(adj[from].begin(),adj[from].end(),to) == adj[from].end())
				adj[from].push_back(to);
			break;
		}
		if(flag == 1)
			break;
	}
	for(int i = 0; i < 26;++i){
		if(!visited[i])
			dfs(i);
		if(flag == 1){
			cout << "Impossible\n";
			return 0;
		}
	}
	while(!top_sort.empty()){
		char c = char(top_sort.top()+'a');
		top_sort.pop();
		cout << c;
	}
	cout << "\n";
}
