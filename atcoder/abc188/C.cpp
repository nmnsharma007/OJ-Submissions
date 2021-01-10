#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int sz = 1;
	for(int i = 1; i <= n;++i){
		sz *= 2;
	}
	int arr[sz];
	int max1 = 0,max2 = 0;
	for(int i = 0; i < sz;++i){
		cin >> arr[i];
		if(i < sz/2)
			max1 = max(max1,arr[i]);
		else
			max2 = max(max2,arr[i]);
	}
	for(int i = 0; i < sz;++i){
		if(arr[i] == min(max1,max2)){
			cout << i+1 << "\n";
			break;
		}
	}
}
