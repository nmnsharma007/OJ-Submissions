#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k;
	cin >> k;
	int arr[12];
	for(int i=0;i<12;i++)
		cin >> arr[i];
	sort(arr,arr+12);
	int flag = 0;
	int sum = 0;
	int count = 0;
	for(int i=11;i>=0;i--)
	{
		if(sum >= k)
			break;
		sum += arr[i];
		count++;
	}
	if(sum >= k)
		cout << count << "\n";
	else
		cout << "-1\n";
}