#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	ll a,b;
	cin >> a >> b;
	ll tempa = a,tempb = b;
	ll powera = 0,powerb = 0;
	while(tempa % 2 == 0)
	{
		powera++;
		tempa /= 2;
	}
	while(tempb %2 == 0)
	{
		powerb++;
		tempb /= 2;
	}
	if(tempa != tempb)
		cout << "-1\n";
	else
	{
		ll dif = abs(powera-powerb);
		ll ans = dif/3;
		dif %= 3;
		ans += dif /2;
		dif %= 2;
		ans += dif;
		cout << ans << "\n";
	}
	}
}