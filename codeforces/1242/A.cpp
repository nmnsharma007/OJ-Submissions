#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin >> n;
	if(n == 1)
		cout << "1\n";
	else{
		for(ll i = 2; i * i <= n;++i){
			if(n%i == 0){
				while(n%i == 0){
					n /= i;
				}
				if(n > 1)
					cout << "1\n";
				else
					cout << i << "\n";
				return 0;
			}
		}
		cout << n << "\n";
	}
}
