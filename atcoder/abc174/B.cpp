#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,d;
	cin >> n >> d;
	int ans = 0;
	for(int i = 0; i < n;++i){
		ll x,y;
		cin >> x >> y;
		double dist = sqrt(x*x+y*y);
		if(dist<= d)
			++ans;
	}
	cout << ans << "\n";
}