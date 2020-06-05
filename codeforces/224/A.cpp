#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ll a,b,c;
	cin >> a >> b >> c;
	ll temp = sqrt(a*b*c);
	ll ans = 4*((temp/a)+(temp/b)+(temp/c));
	cout << ans << "\n";
}