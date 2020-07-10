#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ll n,k;
	cin >> n >> k;
	ll ans = 0;
	while(k%2 == 0){
		k /= 2;
		ans++;
	}
	cout << ans + 1 << "\n";
}