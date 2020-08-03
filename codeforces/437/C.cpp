#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int n,m;
	cin >> n >> m;
	vector<pair<int,int>> edges,cost(n+1);
	int arr[n+1];
	for(int i = 1; i <= n;++i){
		cin >> arr[i];
		cost[i] = {arr[i],i};
	}
	for(int i = 0; i < m;++i){
		int x,y;
		cin >> x >> y;
		edges.push_back({x,y});
	}
	int ans = 0;
	sort(cost.begin()+1,cost.end());
	for(int i = n; i > 0;--i){
		int val = cost[i].first;
		int node = cost[i].second;
		for(int j = 0; j < m;++j){
			if(edges[j].second == node || edges[j].first == node){
				ans += (edges[j].first != node) ? arr[edges[j].first] : arr[edges[j].second];
				edges[j] = {-1,-1};
			}
		}
	}
	cout << ans << "\n";
}