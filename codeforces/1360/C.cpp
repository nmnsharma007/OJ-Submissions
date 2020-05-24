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
		int ocount=0,ecount=0;
		for(int i=0;i<n;i++)
		{
			cin >> arr[i];
			if(arr[i]%2 == 0)
				ecount++;
			else
				ocount++;
		}
		if(ecount%2 == 0 && ocount%2 == 0)
			cout << "YES\n";
		else
		{
			sort(arr,arr+n);
			int flag = 0;
			for(int i=0;i<n-1;i++)
			{
				for(int j=i+1;j<n;j++)
				{
					if(abs(arr[i]-arr[j]) == 1)
					{
						flag = 1;
						break;
					}
				}
				if(flag)
					break;
			}
			if(flag)
				cout << "YES\n";
			else
				cout << "NO\n";
		}
	}
}