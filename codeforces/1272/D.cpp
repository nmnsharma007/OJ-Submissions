#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int arr[n+2];
	arr[0] = 0;
	arr[n+1] = 1e9+7;
	for(int i = 1; i <= n;++i){
		cin >> arr[i];
	}
	int left[n+1],right[n+2];
	left[0] = 0;
	left[1] = 1;
	for(int i = 1; i <= n;++i){
		if(arr[i] > arr[i-1])
			left[i] = left[i-1] + 1;
		else
			left[i] = 1;
	}
	right[n+1] = 0;
	right[n] = 1;
	for(int i = n; i > 0;--i){
		if(arr[i] < arr[i+1])
			right[i] = right[i+1] + 1;
		else
			right[i] = 1;
	}
	int ans = 0;
	for(int i = 1; i <= n;++i){
		if(arr[i-1] < arr[i+1])
			ans = max(ans,left[i-1]+right[i+1]);
		ans = max(ans,left[i]);
		ans = max(ans,right[i]);
	}
	cout << ans << "\n";
}
