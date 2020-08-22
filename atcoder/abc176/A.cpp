#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,x,t;
	cin >> n >> x >> t;
	cout << ((n+x-1)/x) * t << "\n";
}
