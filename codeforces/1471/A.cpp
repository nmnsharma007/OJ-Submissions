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
		ll x;
		cin >> n >> x;
		ll arr[n];
		ll maxi = 0,mini = 0;
		for(int i = 0; i < n;++i){
			cin >> arr[i];
			maxi += (arr[i]+x-1)/x;
			mini += arr[i];
		}
		cout << (mini+x-1)/x << " " << maxi << "\n";
	}
}
