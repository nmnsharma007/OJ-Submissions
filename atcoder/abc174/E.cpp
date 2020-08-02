#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool is_possible(int arr[],int k,int n,int len)
{
	int cuts = 0;
	for(int i = 0; i < n;++i){
		cuts += ((arr[i]+len-1)/len) - 1;
	}
	return cuts <= k;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,k;
	cin >> n >> k;
	int arr[n];
	for(int i = 0;i < n;++i){
		cin >> arr[i];
	}
	int l = 1;
	int r = 1e9+1;
	int ans = INT_MAX;
	while(l < r){
		int mid = (l+r)/2;
		if(is_possible(arr,k,n,mid)){
			r = mid;
			ans = min(ans,mid);
		}
		else
			l = mid+1;
	}
	cout << ans << "\n";
}