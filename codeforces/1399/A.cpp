#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n;++i){
			cin >> arr[i];
		}
		sort(arr,arr+n);
		int flag = 1;
		for(int i = 0; i < n-1;++i){
			if(arr[i+1]-arr[i] > 1){
				flag = 0;
				break;
			}
		}
		if(flag)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}