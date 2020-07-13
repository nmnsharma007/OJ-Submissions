#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int n,m;
	cin >> n >> m;
	ll x,k,y;
	cin >> x >> k >> y;
	int arr[n+1];
	arr[0] = -1;
	for(int i = 1; i <= n;i++){
		cin >> arr[i];
	}
	int b[m+1];
	b[0] = 0;
	for(int i = 1;i <= m;i++){
		cin >> b[i];
	}
	int i = 1;
	int left = 0;
	int maxi = -1;
	ll count = 0;
	ll ans = 0;
	int j = 1;
	while(j <= m){
		count = 0;
		maxi = 0;
		if(i > n){
			puts("-1");
			return 0;
		}
		while(i <= n && arr[i] != b[j]){
			maxi = max(maxi,arr[i]);
			i++;
			count++;
		}
//		cout << "Count so far: " << count << "\n";
		int flag = 1;
		if(count < k && count > 0 && left >= 1 && arr[left] < maxi && i <= n && arr[i] < maxi)
			flag = 0;
		if(flag == 0){
			puts("-1");
			return 0;
		}
		if(count){
			ll need = count%k;
			count -= need;
			ans += need * y;
			if(count >= k){
				if(y*k >= x)
					ans += (count/k) * x;
				else if((left >= 1 && maxi < arr[left]) || (i <= n && arr[i] > maxi))
					ans += count * y;
				else
					ans += (count-k) * y + x;
//				cout << "Answer so far:" << ans << "\n";
			}
		}
//		cout << "Left Index: " << i << "\n";
		left = i;
		j++;
		count = 0;
		i++;
		maxi = 0;
	}
	//count = 0;	
	//cout << count << "\n";
	while(i <= n){
		count++;
		maxi = max(maxi,arr[i]);
		i++;
	}
//	cout << ans << "\n";
	if(count){
		if(maxi > arr[left] &&  count < k && count > 0){
			puts("-1");
			return 0;
		}
			ll need = count%k;
			count -= need;
			ans += need * y;
			if(count >= k){
			if(y*k >= x)
				ans += (count/k) * x;
			else if(left >= 1 && maxi < arr[left])
				ans += count * y;
			else
				ans += (count-k) * y + x;
		}
	}
	cout << ans << "\n";
}