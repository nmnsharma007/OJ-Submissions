#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int arr[n];
	int mini = 1e9+7;
	for(int i = 0; i < n;++i){
		cin >> arr[i];
		mini = min(mini,arr[i]);
	}
	int ans = n+1;
	int prev = -1;
	for(int i = 0; i < n;++i){
		if(arr[i] == mini){
			if(prev != -1)
				ans = min(ans,i-prev);
			prev = i;
		}
	}
	cout << ans << "\n";
}
