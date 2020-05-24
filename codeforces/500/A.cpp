#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	cin >> n >> t;
	int arr[n];
	for(int i=1;i< n;i++)
		cin >> arr[i];
	int flag = 1;
	int cur_cell = 1;
	while(cur_cell < t)
	{
		int next_cell = cur_cell + arr[cur_cell];
		if(next_cell > t)
		{
			flag = 0;
			break;
		}
		else if(next_cell == t)
			break;
		cur_cell = next_cell;
	}
	if(flag)
		cout << "YES\n";
	else
		cout << "NO\n";
}