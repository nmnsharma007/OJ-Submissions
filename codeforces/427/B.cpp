#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t,c;
	cin >> n >> t >> c;
	int arr[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	int ans = 0;
	int left = 0;
	int right = 0;
	int count = 0;
	while(left < n && right < n){
		if(arr[right] <= t){
			count++;
		}
		else{
			left = right+1;
			count = 0;
		}
		if(count == c){
			left++;
			count--;
			ans++;
		}
		right++;
	}
	if(count == c)
		ans++;
	cout << ans << "\n";
}