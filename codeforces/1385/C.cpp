#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n;i++){
			cin >> arr[i];
		}
		int ans = 0;
		int pos = 0;
		for(int i = n-1; i > 0;i--){
			if(arr[i-1] >= arr[i]){
				continue;
			}
			else{
				pos = i;
				break;
			}
		}
		for(int i = pos; i > 0;i--){
			if(arr[i-1] <= arr[i]){
				continue;
			}
			else{
				ans = i;
				break;
			}
		}
		cout << ans << "\n";
	}
}