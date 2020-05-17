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
		int ans = 0;
		sort(arr,arr+n);
		int i = 0;
		while(i < n)
		{
			int size = 1;
			while(i < n-1 && size < arr[i])
			{
				i++;
				size++;
			}
			if(size >= arr[i])
				ans++;
			i++;
		}
		cout << ans << "\n";
	}
}
