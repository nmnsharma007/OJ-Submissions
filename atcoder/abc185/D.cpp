#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin >> n >> m;
	vector<ll> blue(m+2,0);
	blue[0] = 0,blue[m+1] = n+1;
	for(int i = 1; i <= m;++i){
		cin >> blue[i];
	}
	sort(blue.begin(),blue.end());
	ll k = n;
	for(int i = 1; i <= m+1;++i){
		if(blue[i]-blue[i-1] - 1 >= 1)
			k = min(k,blue[i]-blue[i-1]-1);
	}
	ll ans = 0;
	if(m == 0 && k == n)
		ans = 1;
	else if(k == n)
		ans = 0;
	else{
		for(int i = 1; i <= m+1;++i){
			if(blue[i]-blue[i-1]-1 < 1)
				continue;
			ll width = blue[i]-blue[i-1]-1;
			ans += width/k;
			if(width%k)
				++ans;
		}
	}
	cout << ans << "\n";
}
