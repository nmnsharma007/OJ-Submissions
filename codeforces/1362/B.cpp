#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		set<int> s;
		for(int i=0;i<n;i++)
		{
			int x;
			cin >> x;
			s.insert(x);
		}
		set<int> temp;
		set<int> :: iterator it;
		int flag = 0;
		int ans;
		for(int i=1;i<=1024;i++)
		{
			for(it = s.begin();it != s.end();it++)
			{
				int x = *it;
				int y = x^i;
				temp.insert(y);
			}
			if(temp == s)
			{
				ans = i;
				flag = 1;
				break;
			}
			temp.clear();
		}
		if(flag)
			cout << ans << "\n";
		else
			cout << "-1\n";
	}
}