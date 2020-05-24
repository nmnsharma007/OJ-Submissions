#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin >> arr[i];
		int ans = 100000;
		int dif;
		sort(arr,arr+n);
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				dif = abs(arr[i] - arr[j]);
				ans = min(ans,dif);
			}
		}
		cout << ans << "\n";
	}
}
