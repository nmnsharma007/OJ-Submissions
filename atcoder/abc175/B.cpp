#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n;++i){
		cin >> arr[i];
	}
	int ans = 0;
	for(int i = 0; i < n;++i){
		for(int j = i+1; j < n;++j){
			for(int k = j+1; k < n;++k){
				if(arr[i] == arr[j] || arr[i] == arr[k] || arr[j] == arr[k])
					continue;
				if(arr[i] < arr[j]+arr[k] && arr[j] < arr[i]+arr[k] && arr[k] < arr[i]+arr[j])
					++ans;
			}
		}
	}
	cout << ans << "\n";
}
