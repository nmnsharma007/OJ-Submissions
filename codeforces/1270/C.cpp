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
		int n;
		cin >> n;
		ll x;
		cin >> x;
		ll sum = x;
		for(int i = 1; i < n;++i){
			ll temp;
			cin >> temp;
			x = x ^ temp;
			sum += temp;
		}
		cout << "2\n";
		cout << x << " " << sum + x << "\n";
	}
}
