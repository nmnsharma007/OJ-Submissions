#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	int arr[m];
	for(int i=0;i<m;i++)
		cin >> arr[i];
	int dif;
	sort(arr,arr+m);
	int ans = 100000;
	for(int i=n-1;i<m;i++)
	{
		int ulimit = i-n+1;
		for(int j=0;j<=ulimit;j++)
		{
			dif = abs(arr[i]-arr[j]);
			ans = min(ans,dif);
		}
	}
	cout << ans << "\n";
}