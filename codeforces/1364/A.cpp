#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
using ll = long long;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,x;
		cin >> n >> x;
		int arr[n];
		int sum = 0;
		int left = -1;
		int right = -1;
		int flag = 0;
		for(int i=0;i<n;i++)
		{
			cin >> arr[i];
			sum += arr[i];
			if(arr[i]%x)
			{
				flag = 1;
				if(left == -1)
					left = i;
				right = i;
			}
		}
		if(flag == 0)
			cout << "-1\n";
		else
		{
			if(sum%x)
				cout << n << "\n";
			else
				cout << n-min(left+1,n-right) << "\n";
		}
	}
	return 0;
}