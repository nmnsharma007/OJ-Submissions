#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	int ans = 0;
	while(n >= m)
	{
		n = n - m + 1;
		ans += m;
	}
	ans += n;
	cout << ans << "\n";
}