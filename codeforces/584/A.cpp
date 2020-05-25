#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	cin >> n >> t;
	int arr[n];
	arr[0] = 1;
	if(n == 1)
	{
		if(t == 10)
			cout << "-1\n";
		else
			cout << t << "\n";
		return 0;
	}
	int rem = 1%t;
	for(int i=1;i<n-1;i++)
	{
		arr[i] = 0;
		rem = (rem*10+arr[i])%t;
	}
	for(int i=0;i<= 9;i++)
	{
		int temp = rem;
		temp = (temp*10+i)%t;
		if(temp == 0)
		{
			arr[n-1] = i;
			break;
		}
	}
	for(int i=0;i<n;i++)
		cout << arr[i];
}