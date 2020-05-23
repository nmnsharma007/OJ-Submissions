#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int n,m;
	cin >> n >> m;
	int arr[m];
	for(int i=0;i<m;i++)
		cin >> arr[i];
	ll ans = 0;
	ll prev = 1;
	for(int i=0;i<m;i++)
	{
		if(arr[i] >= prev)
			ans += (arr[i]-prev);
		else
			ans += n-prev+arr[i];
		prev = arr[i];
	}
	cout << ans << "\n";
}