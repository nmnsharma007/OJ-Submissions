#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a;
	cin >> n >> a;
	int arr[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	int ans = 0;
	int start = a-2;
	int end = a;
	if(arr[a-1])
		ans++;
	while(start >= 0 && end < n)
	{
		if(arr[start] == 1 && arr[end] == 1)
			ans+=2;
		start--;
		end++;
	}
	while(end < n)
	{
		if(arr[end] == 1)
			ans++;
		end++;
	}
	while(start >= 0)
	{
		if(arr[start] == 1)
			ans++;
		start--;
	}
	cout << ans << "\n";
}