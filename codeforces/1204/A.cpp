#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int n = s.length();
	vector<int> v(n);
	for(int i=0;i<n;i++)
		v[i] = s[i] - '0';
	int ans = (n+1)/2;
	if(n%2)
	{
		int flag = 1;
		for(int i=1;i<n;i++)
		{
			if(v[i] == 1)
			{
				flag = 0;
				break;
			}
		}
		if(flag)
			ans--;
	}
	cout << ans << "\n";
}