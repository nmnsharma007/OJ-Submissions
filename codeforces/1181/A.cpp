#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
		ios_base::sync_with_stdio(0);
		cin.tie(0);
		ll x,y,z;
		cin >> x >> y >> z;
		ll ans1 = (x+y)/z;
		ll need = -1;
		if(ans1 == x/z + y/z)
			need = 0;
		else
			need = min(z-x%z,z-y%z);
		cout << ans1 << " " << need << "\n";
}