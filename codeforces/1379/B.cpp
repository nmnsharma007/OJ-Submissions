#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int t;
	cin >> t;
	while(t--){
		ll l,r,m;
		cin >> l >> r >> m;
		ll a,b,c;
		for(ll i = l; i <= r;++i){
			ll temp1 = m%i;
			ll temp2 = i - m%i;
			if(m != temp1 && temp1 <= r-l){
				a = i;
				b = l + temp1;
				c = l;
				break;
			}
			else if(temp2 <= r-l){
				a = i;
				b = l;
				c = l + temp2;
				break;
			}
		}
		cout << a << " " << b << " " << c << "\n";
	} 
}