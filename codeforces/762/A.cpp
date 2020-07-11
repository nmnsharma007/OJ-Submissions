#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n,k;
	cin >> n >> k;
	vector<ll> divisors;
	for(ll i = 1; i*i <= n;i++){
		if(n%i == 0){
			divisors.push_back(i);
		if(n/i != i)
			divisors.push_back(n/i);
		}
	}
	sort(divisors.begin(),divisors.end());
	ll ans = 0;
	if(k-1 >= divisors.size()){
		ans = -1;
	}
	else
		ans = divisors[k-1];
	cout << ans << "\n";
}