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
		ll arr[n];
		for(int i = 0; i < n;++i){
			cin >> arr[i];
		}
		ll ans = 0;
		for(int i = 1; i < n-1;++i){
			if(arr[i] > 0)
				arr[i+1] += arr[i];
		}
		cout << max(0LL,arr[n-1]) << "\n";
	}
}
