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
		int arr[n+1];
		for(int i=1;i<=n;i++)
			cin >> arr[i];
		int ans[n+1];
		for(int i=1;i<=n;i++)
		{
			int cur = i;
			int temp = arr[i];
			int count = 1;
			while(cur != temp)
			{
				temp = arr[temp];
				count++;
			}
			ans[cur] = count;
		}
		for(int i=1;i<=n;i++)
			cout << ans[i] << " ";
		cout << "\n";
	}
}