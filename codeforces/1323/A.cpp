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
		int ocount = 0;
		int ecount = 0;
		for(int i=0;i<n;i++)
		{	
			cin >> arr[i];
			if(arr[i]%2)
				ocount++;
			else
				ecount++;
		}
		vector<int> ans;
		if(ecount)
		{
			for(int i=0;i<n;i++)
			{
				if(arr[i]%2 == 0)
					ans.push_back(i+1);
			}
			cout << ans.size() << "\n";
			for(int i=0;i<ans.size();i++)
				cout << ans[i] << " ";
			cout << "\n";
		}
		else if(ocount > 1)
		{
			for(int i=0;i<2;i++)
				ans.push_back(i+1);
			cout << ans.size() << "\n";
			for(int i=0;i<ans.size();i++)
				cout << ans[i] << " ";
			cout << "\n";
		}
		else
			cout << "-1\n";
	}
}