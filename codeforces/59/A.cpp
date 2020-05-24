#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int n = s.length();
	int ucount = 0;
	int lcount = 0;
	for(int i=0;i<n;i++)
	{
		if(s[i] >= 'A' && s[i] <= 'Z')
			ucount++;
		else 
			lcount++;
	}
	if(ucount > lcount)
	{
		for(int i=0;i<n;i++)
		{
			if(s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		}
		cout << s << "\n";
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			if(s[i] >= 'A' && s[i] <= 'Z')
				s[i] = s[i] + 32;
		}
		cout << s << "\n";
	}
}