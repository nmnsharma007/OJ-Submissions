#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int n,q;
	cin >> n >> q;
	int arr[n+1];
	for(int i=1;i<=n;i++)
		cin >> arr[i];
	int freq[n+1];
	memset(freq,0,sizeof(freq));
	for(int i=0;i<q;i++)
	{
		int l,r;
		cin >> l >> r;
		freq[l]++;
		if(r+1 <= n)
			freq[r+1]--;
	}
	for(int i=1;i<=n;i++)
		freq[i] += freq[i-1];
	sort(arr+1,arr+n+1);
	sort(freq+1,freq+n+1);
	ll ans = 0;
	for(int i=n;i>0;i--)
		ans += (freq[i]*1LL*arr[i]);
	cout << ans << "\n";
}