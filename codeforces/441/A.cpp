#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,v;
	cin >> n >> v;
	vector<int> ans;
	for(int i=0;i<n;i++)
	{
		int k;
		cin >> k;
		int flag = 0;
		for(int j=0;j<k;j++)
		{
			int x;
			cin >> x;
			if(v > x)
				flag = 1;
		}
		if(flag)
			ans.push_back(i+1);
	}
	cout << ans.size() << "\n";
	for(int i=0;i<ans.size();i++)
		cout << ans[i] << " ";
}