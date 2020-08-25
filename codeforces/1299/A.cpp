#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	ll arr[n+1],pref[n+1],suf[n+1];
	for(int i = 1; i <= n;++i){
		cin >> arr[i];
		if(i == 1)
			pref[i] = ~arr[i];
		else
			pref[i] = pref[i-1] & ~arr[i];
	}
	if(n == 1){
		cout << arr[1] << "\n";
		return 0;
	}
	for(int i = n; i > 0;--i){
		if(i == n)
			suf[i] = ~arr[i];
		else
			suf[i] = suf[i+1] & ~arr[i];
	}
	ll maxi = arr[1] & suf[2];
	int pos = 1;
	if(maxi <=  (pref[n-1] & arr[n])){
		maxi = pref[n-1] & arr[n];
		pos = n;
	}
	for(int i = 2; i < n;++i){
		if(maxi <= (pref[i-1] & arr[i] & suf[i+1])){
			maxi = pref[i-1] & arr[i] & suf[i+1];
			pos = i;
		}
	}
	cout << arr[pos] << " ";
	for(int i = 1; i <= n;++i){
		if(pos == i)
			continue;
		cout << arr[i] << " ";
	}
	cout << "\n";
}
