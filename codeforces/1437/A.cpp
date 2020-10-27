#include<bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		ll l,r;
		cin >> l >> r;
		if(2LL*l >= r+1)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
