#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

int power(int x,int y)
{
	int res = 1;
	while(y){
		if(y%2)
			res = (res * 1LL * x)%MOD;
		x = (x * 1LL * x)%MOD;
		y /= 2;
	}
	return res;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	int fact[1001];
	fact[0] = 1;
	for(int i = 1; i <= 1000;++i){
		fact[i] = (fact[i-1] * 1LL * i)%MOD;
	}
	while(t--){
		int n,k;
		cin >> n >> k;
		vector<int> freq(n,0),freqk(n,0);
		int arr[n];
		for(int i = 0; i < n;++i){
			cin >> arr[i];
			--arr[i];
			++freq[arr[i]];
		}
		sort(arr,arr+n,greater<int>());
		for(int i = 0; i < k;++i){
			++freqk[arr[i]];
		}
		int ans = 1;
		vector<bool> visited(n,false);
		for(int i = 0; i < k;++i){
			if(visited[arr[i]])
				continue;
			visited[arr[i]] = true;
			int num = fact[freq[arr[i]]];
			int denom = (fact[freq[arr[i]]-freqk[arr[i]]] * 1LL * fact[freqk[arr[i]]])%MOD;
			int inv = power(denom,MOD-2);
			int temp = (num* 1LL * inv)%MOD;
			ans = (ans * 1LL * temp)%MOD;
		}
		cout << ans << "\n";
	}
}
