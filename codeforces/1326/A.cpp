#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		if(n == 1)
			cout << "-1\n";
		else
		{
			int arr[n];
			for(int i=0;i<n-1;i++)
				arr[i] = 5;
			arr[n-1] = 4;
			for(int i=0;i<n;i++)
				cout << arr[i];
			cout << "\n";
		}
	}
}