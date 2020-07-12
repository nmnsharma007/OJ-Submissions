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
		ll n;
		cin >> n;
		ll a = 1,b = n-1;
		for(ll i = 2;i*i <= n;i++){
			if(n%i == 0){
				a = n/i;
				b = n - (n/i);
				break;
			}
		}
		cout << a << " " << b << "\n";
	}
}