#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 998244353;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<ll> a(n+1);
	ll x;
	for(int i = 1; i <= n;++i){
		cin >> a[i];
		if(i == 1)
			x = a[i];
		else
			x ^= a[i];
	}
	if(n%2 == 0 && x != 0)
		cout << "NO\n";
	else{
		cout << "YES\n";
		if(n%2 == 1)
			cout << n-1 << "\n";
		else
			cout << n-2 << "\n";
		for(int i = 1; i < n-1;i+=2){
			cout << i << " " << i+1 << " " << n << "\n";
		}
		for(int i = 1; i < n-1;i+=2){
			cout << i << " " << i+1 << " " << n << "\n";
		}
	}
}
