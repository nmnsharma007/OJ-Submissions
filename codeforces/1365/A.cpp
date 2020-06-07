#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,m;
		cin >> n >> m;
		int matrix[n][m];
		set<int> row,col;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin >> matrix[i][j];
				if(matrix[i][j])
				{
					row.insert(i);
					col.insert(j);
				}
			}
		}
		int count = 1;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(row.find(i) != row.end() || col.find(j) != col.end())
					continue;
				if(matrix[i][j] == 0)
				{
					count++;
					row.insert(i);
					col.insert(j);
				}
			}
		}
		if(count&1)
			cout << "Vivek\n";
		else
			cout << "Ashish\n";
	}
}