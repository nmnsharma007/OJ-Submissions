#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,s,k;
		cin >> n >> s >> k;
		vector<int> v(k);
		for(int i=0;i<k;i++)
			cin >> v[i];
		for(int i=0;i<=k;i++)
		{
			if(s-i >= 1 && find(v.begin(),v.end(),s-i) == v.end())
			{
				cout << i << "\n";
				break;
			}
			else if(s+i <= n && find(v.begin(),v.end(),s+i) == v.end())
			{
				cout << i << "\n";
				break;
			}
		}
	}
}