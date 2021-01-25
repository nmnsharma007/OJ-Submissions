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
		while(n % 2LL == 0){
			n /= 2LL;
		}
		if(n == 1)
			cout << "NO\n";
		else
			cout << "YES\n";
	}
}
