#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int ans = 0;
	int ocount = 0;
	int ccount = 0;
	int i=0;
	int start_index = 0;
	for(int i=0;i<n;i++)
	{
		if(s[i] == ')')
			ccount++;
		else
			ocount++;
	}
	if(ocount != ccount)
		cout << "-1\n";
	else
	{
		ccount = 0;
		ocount = 0;
		while(i < n)
		{
			if(s[i] == ')')
				ccount++;
			else
				ocount++;
			start_index = i;
			int flag = 0;
			while(ccount > ocount)
			{
				flag = 1;
				i++;
				if(s[i] == ')')
					ccount++;
				else
					ocount++;
			}
			if(flag)
			{	
				ans += i-start_index+1;
				ocount = 0;
				ccount = 0;
			}
			i++;
		}
		cout << ans << "\n";
	}
}