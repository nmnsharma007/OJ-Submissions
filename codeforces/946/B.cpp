#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(ll &a, ll &b){
	if(a == 0 || b == 0)
		return;
	if(2LL*a > b && 2LL*b > a)
		return;
	if(a >= 2LL*b)
		a = a%(2LL*b);
	else
		b = b%(2LL*a);
	solve(a,b);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n,m;
	cin >> n >> m;
	solve(n,m);
	cout << n << " " << m << "\n";
}
