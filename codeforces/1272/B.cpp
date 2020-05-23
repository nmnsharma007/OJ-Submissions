#include<bits/stdc++.h>
using namespace std;
int main()
{
	int q;
	cin >> q;
	while(q--)
	{
		string s;
		cin >> s;
		int left,right,up,down;
		left = right = up = down = 0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='L')
				left++;
			else if(s[i] == 'R')
				right++;
			else if(s[i] == 'D')
				down++;
			else
				up++;
		}
		int len = 2*(min(left,right)+min(up,down));
		string ans = "";
		int	l = min(left,right);
		int u = min(up,down);
		int r = l;
		int d = u;
		if(l == 0)
		{
			if(u != 0 && d != 0)
				cout << "2\nUD\n";
			else
				cout << "0\n";
		}
		else if(u == 0)
		{
			if(l && r)
				cout << "2\nLR\n";
			else
				cout << "0\n";
		}
		else 
		{
			while(l--)
				ans += 'L';
			while(u--)
				ans += 'U';
			while(r--)
				ans += 'R';
			while(d--)
				ans += 'D';
			cout << ans.length() << "\n";
			cout << ans << "\n";
		}
	}
}