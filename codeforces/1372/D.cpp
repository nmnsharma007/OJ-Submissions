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
	for(int i = 0; i < n;i++){
		cin >> arr[i];
	}
	int aux[n];
	int k = 0;
	for(int i = 0; i < n;i++){
		if(i&1){
			aux[k++] = arr[i];
		}
	}
	for(int i = 0; i < n;i++){
		if(i%2 == 0){
			aux[k++] = arr[i];
		}
	}
/*	for(int i = 0; i < n;i++){
		cout << aux[i] << "\n";
	}*/
	int len = (n+1)/2;
	ll sum = 0;
	for(int i = 0; i < len;i++){
		sum += aux[i%n];
	}
	ll ans = sum;
	for(int i = 1; i < n;i++){
		sum  = sum - aux[i-1] + aux[(i+len-1)%n];
		ans = max(sum,ans);
	}
	cout << ans << "\n";
}