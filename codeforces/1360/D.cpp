#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,k;
		cin >> n >> k;
		int ans = 0;
		for(int i=1;i*i<=n;i++)
		{
			if(n%i)
				continue;
			if(i <= k)
				ans = max(ans,i);
			if(n/ans <= k)
				ans = max(ans,n/ans);
		}
		cout << n/ans << "\n";
	}
}