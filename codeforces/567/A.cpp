#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ll n;
	cin >> n;
	ll arr[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	cout << abs(arr[0]-arr[1]) << " " << abs(arr[0]-arr[n-1]) << "\n";
	for(int i=1;i<n-1;i++)
		cout << min(abs(arr[i]-arr[i-1]),abs(arr[i]-arr[i+1])) << " " << max(abs(arr[i]-arr[0]),abs(arr[i]-arr[n-1])) << "\n";
	cout << abs(arr[n-1]-arr[n-2]) << " " << abs(arr[0]-arr[n-1]) << "\n";
}