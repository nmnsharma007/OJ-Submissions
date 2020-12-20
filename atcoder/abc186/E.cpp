#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll extended_euclidean(ll a,ll b,ll& x,ll& y){
	if(b == 0){
		x = 1;
		y = 0;
		return a;
	}
	ll x1,y1;
	ll d = extended_euclidean(b,a%b,x1,y1);
	x = y1;
	y = x1 - y1*(a/b);
	return d;
}

void solve(){
	ll n,s,k;
	cin >> n >> s >> k;
	if(__gcd(n,k) == 1){
		ll x,y;
		ll g = extended_euclidean(k,n,x,y);
		if(g != 1)
			cout << "-1\n";
		else{
			x = (x%n+n)%n;
			cout << (x*(n-s))%n << "\n";
		}
	}
	else{
		ll g = __gcd(k,n);
		if(s%g)
			cout << "-1\n";
		else{
			ll x,y;
			ll g1 = extended_euclidean(k/g,n/g,x,y);
			x = (x%n + n)%n;
			cout << (x*(n/g - s/g))%(n/g) << "\n";
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
