#include<bits/stdc++.h>
using namespace std;
int main()
{
	int q;
	cin >> q;
	while(q--)
	{
		int n;
		cin >> n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin >> arr[i];
		int sum = 0;
		sort(arr,arr+n);
		int pos = n;
		for(int i=0;i<n;i++)
		{
			if(arr[i] > 2048)
			{
				pos = i;
				break;
			}
		}
		for(int i=0;i<pos;i++)
			sum += arr[i];
		if(sum >= 2048)
			cout << "YES" << "\n";
		else
			cout << "NO\n";
	}
}