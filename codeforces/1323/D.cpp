#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin >> a[i];
	ll ans = 0;
	for(int k=0;k<26;k++)
	{
		vector<int>  b(n);
		for(int j=0;j<n;j++)
			b[j] = a[j] % (1<<(k+1));
		sort(b.begin(),b.end());
		ll count = 0;
		for(int i=0;i<n;i++)
		{
			int l = lower_bound(b.begin()+i+1, b.end(), ((1<<k) - b[i])) - b.begin();
			int r = lower_bound(b.begin()+i+1, b.end(), ((1<<(k+1)) - b[i]))-b.begin();
			count += r-l;
			int m = lower_bound(b.begin()+i+1,b.end(),(1<<(k+1))+(1<<k)-b[i])-b.begin();
			count += n-m;
		}
		ans += (count%2) *1LL* (1<<k);
	}
	cout << ans << "\n";
}