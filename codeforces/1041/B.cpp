#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ll a,b,x,y;
	cin >> a >> b >> x >> y;
	ll m = x/__gcd(x,y);
	ll n = y/__gcd(x,y);
	cout << min(a/m,b/n) << "\n";
}