#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<ll> weights(n+1);
		ll sum = 0;
		for(int i = 1; i <= n;++i){
			cin >> weights[i];
			sum += weights[i];
		}
		vector<bool> used(n+1,0);
		priority_queue<ll> pq;
		for(int i = 1; i <= n-1;++i){
			int u,v;
			cin >> u >> v;
			if(used[u] == 0)
				used[u] = 1;
			else
				pq.push(weights[u]);
			if(used[v] == 0)
				used[v] = 1;
			else
				pq.push(weights[v]);
		}
		cout << sum << " ";
		for(int i = 0; i < n-2;++i){
			ll w = pq.top();
			pq.pop();
			sum += w;
			cout << sum << " ";
		}
		cout << "\n";
	}
}   
