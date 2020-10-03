#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	ll a1,a2,a3,b1,b2,b3;
	cin >> a1 >> a2 >> a3;
	cin >> b1 >> b2 >> b3;
	ll ans1 = max(b1-a1-a2,0LL) + max(0LL,b3-a1-a3) + max(b2-a2-a3,0LL);
	ll ans2 = min(a2,b3) + min(a1,b2) + min(a3,b1);
	cout << ans1 << " " << ans2 << "\n";
}
