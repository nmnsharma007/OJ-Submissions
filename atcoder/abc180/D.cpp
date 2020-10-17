#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll x,y,a,b;
	cin >> x >> y >> a >> b;
	ll ans = 0;
	for(int i = 0; i <= 65;++i){
		if(i > 0 && a < y/x)
			x = a*x;
		else if(i > 0)
			break;
		ll add = (y-x)/b;
		if((y-x)%b == 0)
			--add;
		ans = max(ans,i + max(0LL,add));
	}
	cout << ans << "\n";
}
