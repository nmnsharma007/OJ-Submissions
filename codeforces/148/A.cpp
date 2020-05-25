#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,l,m,n,d;
	cin >> k >> l >> m >> n >> d;
	int arr[d+1];
	memset(arr,-1,sizeof(arr));
	int ans = 0;
	for(int i=k;i<=d;i+=k)
	{
		if(arr[i] == -1)
		{
			ans++;
			arr[i] = 0;
		}
	}
	for(int i=l;i<=d;i+=l)
	{
		if(arr[i] == -1)
		{
			ans++;
			arr[i] = 0;
		}
	}
	for(int i=m;i<=d;i+=m)
	{
		if(arr[i] == -1)
		{
			ans++;
			arr[i] = 0;
		}
	}
	for(int i=n;i<=d;i+=n)
	{
		if(arr[i] == -1)
		{
			ans++;
			arr[i] = 0;
		}
	}
	cout << ans << "\n";
}