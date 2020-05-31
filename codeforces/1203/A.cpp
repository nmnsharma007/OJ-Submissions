#include<bits/stdc++.h>
using namespace std;
int main()
{
	int q;
	cin >> q;
	while(q--)
	{
		int n;
		cin >> n;
		int arr[n];
		int pos = -1;
		for(int i=0;i<n;i++)
		{
			cin >> arr[i];
			if(arr[i] == 1)
				pos = i;
		}
		vector<int> v(n);
		int flag = 1;
		int k = 0;
		for(int i=pos;i<n;i++)
			v[k++] = arr[i];
		for(int i=0;i<pos;i++)
			v[k++] = arr[i];
		for(int i=0;i<n;i++)
		{
			if(v[i] != i+1)
			{
				flag = 0;
				break;
			}
		}
		if(flag == 0)
		{
			flag = 1;
			v.clear();
			int k=0;
			for(int i=pos+1;i<n;i++)
				v[k++] = arr[i];
			for(int i=0;i<=pos;i++)
				v[k++] = arr[i];
			for(int i=0;i<n;i++)
			{
				if(v[i] != n-i)
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