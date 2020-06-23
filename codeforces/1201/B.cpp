#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int n;
	cin >> n;
	ll arr[n];
	ll sum = 0;
	for(int i=0;i<n;i++){
		cin >> arr[i];
		sum += arr[i];
	}
	sort(arr,arr+n);
	ll temp = sum - arr[n-1];
	if(arr[n-1] > temp || sum & 1)
		cout << "NO\n";
	else
		cout << "YES\n";
}