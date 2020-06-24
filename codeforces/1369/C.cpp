#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		ll arr[n];
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		int w[k];
		for(int i=0;i<k;i++){
			cin >> w[i];
		}
		sort(arr,arr+n);
		sort(w,w+k);
		ll ans = 0;
		int pos = n-1;
		int index = -1;
		for(int i=0;i<k;i++){
			if(w[i] == 1)
				ans += 2LL*arr[pos--];
			else{
				index = i;
				break;
			}
		}		
		if(index != -1){
			int l = 0;
			int r = pos;
			int temp = k-1;
			while(temp >= index){
				ans += arr[r--];
				ans += arr[l];
				l += w[temp]-1;
				temp--;
			}
		}
		cout << ans << "\n";
	}
}