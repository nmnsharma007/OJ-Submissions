#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n];
	int flag = 1;
	for(int i=0;i<n;i++)
		cin >> arr[i];
	for(int i=0;i<n;i++)
	{
		int temp = arr[i];
		while(temp%2 == 0)
			temp /= 2;
		while(temp%3 == 0)
			temp /= 3;
		arr[i] = temp;
		if(i > 0 && arr[i] != arr[i-1])
			flag = 0;
	}
	if(flag)
		cout << "Yes";
	else
		cout << "No";
}
