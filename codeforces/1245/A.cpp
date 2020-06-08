#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
using ll = long long;
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a,b;
		cin >> a >> b;
		if(__gcd(a,b) == 1)
			puts("Finite\n");
		else
			puts("Infinite\n");
	}
}