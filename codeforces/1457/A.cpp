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
		ll n,m,r,c;
		cin >> n >> m >> r >> c;
		ll ans = r-1+c-1;
		ans = max(ans,abs(n-r)+abs(m-c));
		ans = max(ans,abs(r-1)+abs(m-c));
		ans = max(ans,abs(n-r)+abs(c-1));
		cout << ans << "\n";
	}
}
