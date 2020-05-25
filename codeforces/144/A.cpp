#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n];
	int ans = 0;
	int max_index = 0;
	int min_index = 0;
	for(int i=0;i<n;i++)
		cin >> arr[i];
	for(int i=0;i<n;i++)
	{
		if(arr[max_index] < arr[i])
			max_index = i;
		if(arr[min_index] >= arr[i])
			min_index = i;
	}
	ans = max_index + n - 1 - min_index;
	if(max_index > min_index)
		ans--;
	else if(max_index ==  min_index)
		ans = 0;
	cout << ans  << "\n";
}