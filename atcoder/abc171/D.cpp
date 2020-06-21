#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int n;
	cin >> n;
	vector<ll> freq(100001);
	int arr[n];
	ll sum = 0;
	for(int i=0;i<n;i++){
		cin >> arr[i];
		freq[arr[i]]++;
		sum += arr[i];
	}
	int q;
	cin >> q;
	while(q--){
		ll b,c;
		cin >> b >> c;
		sum = sum - freq[b] * b + freq[b] * c;
		freq[c] += freq[b];
		freq[b] = 0;
		cout << sum << "\n";
	}
}