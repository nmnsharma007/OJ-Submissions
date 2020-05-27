#include<bits/stdc++.h>
using namespace std;
vector<int> nos(vector<int> a,int n)
{
	vector<int> res(n+1);
	int i=0;
	while(i < a.size())
	{
		if(a[i] == 0)
		{
			i++;
			continue;
		}
		int j = i;
		while(j < a.size() && a[j] == 1)
			j++;
		for(int len = 1;len<=j-i;len++)
		{
			res[len] += j-i-len+1;
		}
		i = j;
	}
	return res;
}
int main()
{
	int n,m,k;
	cin >> n >> m >> k;
	vector<int> a(n),b(m);
	for(int i=0;i<n;i++)
		cin >> a[i];
	for(int i=0;i<m;i++)
		cin >> b[i];
	vector<int> asegment = nos(a,max(n,m));
	vector<int> bsegment = nos(b,max(n,m));
	long long int ans = 0;
	for(int i=1;i<asegment.size();i++)
	{
		if(k%i == 0 && k/i <= max(n,m))
		{
			ans += asegment[i]*bsegment[k/i];
		}
	}
	cout << ans << "\n";
}