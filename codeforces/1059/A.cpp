#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ll n,L,a;
	cin >> n >> L >> a;
	ll t[n],l[n];
	for(int i = 0; i < n;i++){
		cin >> t[i] >> l[i];
	}
	ll time = 0;
	ll ans = 0;
	for(int i = 0; i < n;i++){
		ans += (t[i] - time)/a;
		time += (t[i]-time)+l[i];
	}
	ans += (L - time)/a;
	cout << ans << "\n";
}