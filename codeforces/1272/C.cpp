#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int n,k;
	cin >> n >> k;
	string s;
	cin >> s;
	int freq[26];
	memset(freq,0,sizeof(freq));
	for(int i=0;i<k;i++)
	{
		char c;
		cin >> c;
		freq[c-'a']++;
	}
	ll ans = 0;
	ll count = 0;
	for(int i=0;i<n;i++)
	{
		if(freq[s[i]-'a'] != 0)
			count++;
		else
		{
			ans +=  (count*(count+1))/2;
			count = 0;
		}
	}
	ans += ((count+1)*count)/2;
	cout << ans << "\n";
}