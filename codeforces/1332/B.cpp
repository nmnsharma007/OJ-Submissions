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
		int arr[n];
		for(int i=0;i<n;i++)
			cin >> arr[i];
		vector<int> primes = {2,3,5,7,11,13,17,19,23,29,31};
		int ans[n];
		memset(ans,-1,sizeof(ans));
		int cur_color = 1;
		for(int p : primes)
		{
			bool ok = false;
			for(int i=0;i<n;i++)
			{
				if(arr[i] % p == 0)
				{
					if(ans[i] == -1)
					{
						ans[i] = cur_color;
						ok = true;
					}
				}
			}
			if(ok)
				cur_color++;
		}
		cout << cur_color-1 << "\n";
		for(int i=0;i<n;i++)
			cout << ans[i] << " ";
		cout << "\n";
	}
}
