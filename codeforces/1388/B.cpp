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
		int ans[n+1];
		if(n%4 == 0){
			for(int i = 1; i <= n/4;++i){
				ans[i] = 8;
			}
			for(int i = n/4+1;i <= n;++i){
				ans[i] = 9;
			}
			reverse(ans+1,ans+n+1);
		}
		else{
			for(int i = 1; i <= n/4+1;++i){
				ans[i] = 8;
			}
			for(int i = n/4+2; i <= n;++i){
				ans[i] = 9;
			}
			reverse(ans+1,ans+n+1);
		}
		for(int i = 1; i <= n;++i){
			cout << ans[i];
		}
		cout << "\n";
	}
}