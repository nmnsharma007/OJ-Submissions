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
		ll l,r;
		cin >> l >> r;
		if(2*l > r)
			cout << "-1 -1\n";
		else
			cout << l << " " << 2*l << "\n";
	}	
}