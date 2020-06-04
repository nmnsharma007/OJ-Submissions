#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	int size = 3*n+3;
	int arr[size];
	memset(arr,-1,sizeof(arr));
	if(m >= n-1 && m <= 2*(n+1))
	{
		for(int i=3;i<size;i+=3)
		{
			if(n)
			{
				arr[i] = 0;
				n--;
			}
			else
				break;
		}
		for(int i=4;i<size;i+=3)
		{
			if(m)
			{
				arr[i] = 1;
				m--;
			}
			else
				 break;
		}
		for(int i=5;i<size;i+=3)
		{
			if(m)
			{
				arr[i] = 1;
				m--;
			}
			else
				break;
		}
		if(m>0)
		{
			arr[1] = 1;
			m--;
			if(m > 0)
			{
				arr[2] = 1;
				m--;
				if(m > 0)
				{
					arr[size-2] = 1;
					m--;
					if(m)
					{
						arr[size-1] = 1;
						m--;
					}
				}
			}
		}
		for(int i=1;i<size;i++)
		{
			if(arr[i] != -1)
				cout << arr[i];
		}
		cout << "\n";
	}
	else
		cout << "-1\n";
}