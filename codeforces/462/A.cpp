#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string s[n];
	for(int i=0;i<n;i++)
		cin >> s[i];
	int flag = 1;
	for(int i=0;i<n;i++)
	{
		int count = 0;
		for(int j=0;j<n;j++)
		{
			if(i < n-1)
			{
				if(s[i+1][j] == 'o')
					count++;
			}
			if(i > 0)
			{
				if(s[i-1][j] == 'o')
					count++;
			}
			if(j < n-1)
			{
				if(s[i][j+1] == 'o')
					count++;
			}
			if(j > 0)
			{
				if(s[i][j-1] == 'o')
					count++;
			}
			if(count%2)
			{
				flag = 0;
				break;
			}
		}
		if(flag == 0)
			break;
	}
	if(flag)
		cout << "YES\n";
	else
		cout << "NO\n";
}