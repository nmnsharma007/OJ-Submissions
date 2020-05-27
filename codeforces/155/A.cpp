#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	int cur_max = arr[0];
	int cur_min = arr[0];
	int count = 0;
	for(int i=0;i<n;i++)
	{
		if(arr[i] > cur_max)
		{
			count++;
			cur_max = arr[i];
		}
		if(arr[i] < cur_min)
		{
			cur_min = arr[i];
			count++;
		}
	}
	cout << count << "\n";
}