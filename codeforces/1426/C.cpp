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
		int ans = 1e9+7;
		for(int i = 1;i*i <= n;++i){
			int num = i-2 + (n+i-1)/i;
			ans = min(num,ans);
		}
		cout << ans << "\n";
	}
} 
