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
		int type1 = 0,type2 = 0;
		for(int i=0;i<n;i++)
		{
			cin >> b[i];
			if(b[i] == 0)
				type1++;
			else
				type2++;
		}
		if(type1 == 0 || type2 == 0)
		{
			bool status = true;
			for(int i=0;i<n-1;i++)
			{
				if(a[i+1] < a[i])
				{
					status = false;
					break;
				}
			}
			if(status)
				puts("Yes\n");
			else
				puts("No\n");
		}
		else
			puts("Yes\n");
	}
}