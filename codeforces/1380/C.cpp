#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin >> n >> x;
		ll arr[n];
		for(int i = 0;i < n;i++){
			cin >> arr[i];
		}
		sort(arr,arr+n);
		ll count = 0;
		int ans = 0;
		for(int i = n-1; i >= 0;i--){
			count++;
			while(i >= 0 && count * arr[i] < x){
				count++;
				i--;
			}
			if(i >= 0 && count * arr[i] >= x)
				ans++;
			count = 0;
		}
		cout << ans << "\n";
	}
}