#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	int count = 1;
	int ans = 1;
	for(int i=1;i<n;i++)
	{
		if(arr[i] >= arr[i-1])
			count++;
		else
		{
			//i--;
			ans = max(ans,count);
			count = 1;
		}
	}
	ans = max(ans,count);
	cout << ans << "\n";
}