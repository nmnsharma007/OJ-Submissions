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
		int a[n],b[n];
		for(int i=0;i<n;i++)
			cin >> a[i];
		for(int i=0;i<n;i++)
			cin >> b[i];
		int pos = -1;
		for(int i=0;i<n;i++)
		{
			if(a[i] != b[i])
			{
				pos = i;
				break;
			}
		}
		if(pos != -1)
		{
			int dif = a[pos] - b[pos];
			int flag = 1;
			int start = -1;
			if(dif >= 0)
				flag = 0;
			for(int i=pos+1;i<n;i++)
			{
				if(a[i]-b[i] != dif)
				{
					if(a[i] == b[i])
					{
						start = i;
						break;
					}
					else
					{
						flag = 0;
						break;
					}
				}
			}
			if(flag == 0)
				cout << "NO\n";
			else
			{
				if(start != -1)
				{
					flag = 1;
					for(int i=start+1;i<n;i++)
					{
						if(a[i] != b[i])
						{
							flag = 0;
							break;
						}
					}
					if(flag)
						cout << "YES\n";
					else
						cout << "NO\n";
				}
				else
					cout << "YES\n";
			}
		}
		else
			cout << "YES\n";	
	}
}