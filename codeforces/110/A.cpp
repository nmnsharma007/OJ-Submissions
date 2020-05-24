#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n;
	cin >> n;
	ll count = 0;
	while(n)
	{
		ll rem = n%(ll)10;
		if(rem ==(ll) 4 || rem == (ll)7)
			count++;
		n /=(ll) 10;
	}
	if(count == 4 || count == 7)
		cout << "YES\n";
	else
		cout << "NO\n";
}