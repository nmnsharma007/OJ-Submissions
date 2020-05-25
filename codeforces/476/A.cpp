#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	int flag = 0;
	int ans;
	for(int i=n/2 + n%2;i<=n;i++)
	{
		if(i % m == 0)
		{
			ans = i;
			flag = 1;
			break;
		}
	}
	if(flag)
		cout << ans << "\n";
	else
		cout << "-1\n";
}