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
		int matrix[n][n];
		for(int i=0;i<n;i++)
		{
			string s;
			cin >> s;
			for(int j=0;j<n;j++)
				matrix[i][j] = s[j]-'0';
		}/*
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
				cout << matrix[i][j];
			cout << "\n";
		}*/
		int flag = 1;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(matrix[i][j] == 0)
					continue;
				if(j == n-1 || i == n-1)
					continue;
				if(matrix[i][j+1] == 0 &&  matrix[i+1][j] == 0)
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
}