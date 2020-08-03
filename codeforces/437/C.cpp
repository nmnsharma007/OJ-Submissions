#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int n,m;
	cin >> n >> m;
	int arr[n+1];
	for(int i = 1; i <= n;++i){
		cin >> arr[i];
	}
	int ans = 0;
	for(int i = 0; i < m;++i){
		int u,v;
		cin >> u >> v;
		ans += min(arr[u],arr[v]);
	}
	cout << ans << "\n";
}