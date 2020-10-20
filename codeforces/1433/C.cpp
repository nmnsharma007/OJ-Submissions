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
		int maxi = 0;
		for(int i = 0; i < n;++i){
			cin >> arr[i];
			maxi = max(maxi,arr[i]);
		}
		int pos = -1;
		for(int i = 0; i < n;++i){
			if(arr[i] == maxi){
				if(i > 0 && arr[i] > arr[i-1]){
					pos = i+1;
					break;
				}
				if(i < n-1 && arr[i] > arr[i+1]){
					pos = i+1;
					break;
				}
			}
		}
		cout << pos << "\n";
	}
}
