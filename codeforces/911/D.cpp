#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> p(n+1);
	for(int i = 1; i <= n;++i){
		cin >> p[i];
	}
	vector<bool> visited(n+1,false);
	int parity = 0;
	for(int i = 1;i <= n;++i){
		if(visited[i])
			continue;
		int start = i;
		int cycle = 0;
		while(!visited[start]){
			visited[start] = true;
			start = p[start];
			++cycle;
		}
		--cycle;
		if(cycle%2)
			parity ^= 1;
	}
	int m;
	cin >> m;
	while(m--){
		int l,r;
		cin >> l >> r;
		int swaps = (r-l+1)/2;
		if(swaps%2)
			parity ^= 1;
		if(parity)
			cout << "odd\n";
		else
			cout << "even\n";
	}
}
