#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a,b;
		cin >> a >> b;
		int max_side = max(a,b);
		int min_side = min(a,b);
		int side = max(max_side,2*min_side);
		int ans = side*side;
		cout << ans << "\n";
	}
}