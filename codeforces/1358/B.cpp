#include<bits/stdc++.h>
using namespace std;
#define ll long long int
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
		sort(arr,arr+n);
		int num = n;
		for(int i=n-1;i>=0;i--)
		{
			if(num >= arr[i])
				break;
			else
				num--;
		}
		cout << num+1 << "\n";
	}
}