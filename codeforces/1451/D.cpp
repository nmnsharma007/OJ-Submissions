#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 998244353;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		ll d,k;
		cin >> d >> k;
		double factor = (double)d/(sqrt(2)*k);
		ll ans = (ll)factor * k;
		if((ans + k)*(ans + k) + ans*ans > d*d)
			cout << "Utkarsh\n";
		else
			cout << "Ashish\n";
	}
}
