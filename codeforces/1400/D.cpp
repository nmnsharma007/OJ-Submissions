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
		int arr[n+1];
		int freq[n+1][n+1];//frequency of j element upto ith position
		memset(freq,0,sizeof(freq));
		for(int i = 1; i <= n;++i){
			cin >> arr[i];
			for(int j = 1; j <= n;++j){
				freq[i][j] = (arr[i] == j) ? freq[i-1][j] + 1 : freq[i-1][j];
			}
		}
		ll ans = 0;
		for(int j = 1; j <= n;++j){
			for(int k = j+1; k <= n;++k){
				ans += freq[j-1][arr[k]] * (freq[n][arr[j]] - freq[k][arr[j]]);
			}
		}
		cout << ans << "\n";
	}
}
