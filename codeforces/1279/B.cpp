#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n,s;
		cin >> n >> s;
		ll arr[n];
		ll sum = 0;
		for(int i = 0; i < n;++i){
			cin >> arr[i];
			sum += arr[i];
		}
		if(sum <= s)
			puts("0");
		else{
			int pos = -1;
			int maxi = 0;
			sum = 0;
			for(int i = 0; i < n;++i){
				sum += arr[i];
				if(sum > s){
					pos = i;
					break;
				}
			}
			for(int i = 0; i <= pos;i++){
				if(arr[i] > arr[maxi])
					maxi = i;
			}
			cout << maxi+1 << "\n";
		}
	}
}