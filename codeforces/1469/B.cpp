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
		int r[n+1];
		r[0] = 0;
		for(int i = 1; i <= n;++i){
			cin >> r[i];
		}
		int m;
		cin >> m;
		int b[m+1];
		b[0] = 0;
		for(int i = 1; i <= m;++i){
			cin >> b[i];
		}
		int ans = 0;
		int osum = 0,isum = 0;
		for(int i = 0; i <= n;++i){
			osum += r[i];
			isum = 0;
			for(int j = 0; j <= m;++j){
				isum += b[j];
				ans = max(ans,isum + osum);
			}
		}
		cout << ans << "\n";
	}
}
