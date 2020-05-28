#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	int arr[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	int temp = (arr[0]+m-1)/m;
	int ans = 1;
	for(int i=1;i<n;i++){
		int x = (arr[i]+m-1)/m;
		if(x >= temp)
		{
			ans = i+1;
			temp = x;
		}
	}
	cout << ans << "\n";
}