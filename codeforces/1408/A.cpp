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
		vector<int> a(n+1),b(n+1),c(n+1);
		for(int i = 1; i <= n;++i){
			cin >> a[i];
		}
		for(int i = 1; i <= n;++i){
			cin >> b[i];
		}
		for(int i = 1; i <= n;++i){
			cin >> c[i];
		}
		vector<int> ans(n+1);
		ans[1] = a[1];
		for(int i = 2; i < n;++i){
			if(a[i] != ans[i-1])
				ans[i] = a[i];
			else if(b[i] != ans[i-1])
				ans[i] = b[i];
			else if(c[i] != ans[i-1])
				ans[i] = c[i];
		}
		if(a[n] != ans[1] && a[n] != ans[n-1])
			ans[n] = a[n];
		else if(b[n] != ans[1] && b[n] != ans[n-1])
			ans[n] = b[n];
		else if(c[n] != ans[1] && c[n] != ans[n-1])
			ans[n] = c[n];
		for(int i = 1; i <= n;++i){
			cout << ans[i] << " ";
		}
		cout << "\n";
	}
}
