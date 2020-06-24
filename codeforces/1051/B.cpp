#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ll l,r;
	cin >> l >> r;
	ll count = (r-l+1LL)/2LL;
	puts("YES\n");
	while(count--){
		cout << l << " " << l+1 << "\n";
		l += 2;
	}
}