#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n];
	int xr = 0;
	for(int i=0;i<n;i++){
		cin >> arr[i];
		xr ^= arr[i];
	}
	for(int i=0;i<n;i++){
		int temp = xr^arr[i];
		cout <<  temp  << " ";
	}
}