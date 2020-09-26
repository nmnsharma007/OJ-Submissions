#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> f(n+1,0),freq(n+1,0);
	for(int i = 1; i <= n;++i){
		cin >> f[i];
		++freq[f[i]];
	}
	set<int> both,in,out;
	vector<bool> visited(n+1,false);
	for(int i = 1; i <= n;++i){
		if(freq[i] == 0 && f[i] == 0)
			both.insert(i);
		if(freq[i] == 0 && f[i])
			out.insert(i);
		if(freq[i] && f[i] == 0)
			in.insert(i);
	}
	int node = *in.begin();
	in.erase(node);
	int start = *both.begin();
	visited[node] = true;
	for(auto x : both){
		visited[x] = true;
		f[node] = x;
		node = x;
	}
	visited[node] = false;
	in.insert(node);
	for(auto prev : in){
		if(visited[prev])
			continue;
		if(out.empty())
			f[prev] = start;
		while(!visited[prev] && !out.empty()){
			visited[prev] = true;
			if(f[prev] == 0){
				int next = *out.begin();
				out.erase(next);
				f[prev] = next;
				prev = next;
			}
			else
				prev = f[prev];
		}
	}
	for(int i = 1; i <= n;++i){
		cout << f[i] << " ";
	}
	cout << "\n";
} 
