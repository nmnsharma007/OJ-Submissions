#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin >> n;
	ll ans = 1;
	if(n >= 5){
		for(ll i = n; i >= 5;--i){
			if(i%2 == 0)
				ans = max(ans,(i * (i-1) * (i-2))/2LL);
			else
				ans = max(ans,i * (i-1) * (i-2));
			if(i%2 == 0 && (i-3)%3)
				ans = max(ans,i * (i-1) * (i-3));
		}
	}
	else if(n == 4){
		ans = 12;
	}
	else if(n == 3){
		ans = 6;
	}
	else if(n == 2){
		ans = 2;
	}
	cout << ans << "\n";
}