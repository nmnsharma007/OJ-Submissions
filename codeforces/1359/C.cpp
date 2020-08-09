#include<bits/stdc++.h>
using namespace std;
using ll = long long;
double func(ll i,ll h,ll c)
{
	return (double)(i*h + (i-1LL) * c)/(double)(2LL * i - 1LL);
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	cin >> tc;
	while(tc--){
		ll h,c,t;
		cin >> h >> c >> t;
		if(h == t){
			cout << "1\n";
			continue;
		}
		if(t <= (h+c)/2LL){
			cout << "2\n";
			continue;
		}
		int l = 1;
		int r = 1e7;
		while(l <= r){
			ll mid = (l+r)/2LL;
			if(func(mid,h,c) < t)
				r = mid - 1LL;
			else
				l = mid + 1LL;
		}
		int ans;
		double dif = 1e9;
		for(int i = max(1,l-2); i < l + 2;++i){
			if(abs(func(i,h,c)-(double)t) < dif){
				ans = i;
				dif = abs(func((ll)i,h,c) - t);
			}
		}
		cout << 2 * ans - 1 << "\n";
	}
}
