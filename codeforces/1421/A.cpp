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
		ll a,b;
		cin >> a >> b;
		if(a > b)
			swap(a,b);
		ll ans = a^b;
		cout << ans << "\n";
	}
}
