#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n];
	int num5 = 0,num0 = 0;
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
		if(arr[i] == 5)
			num5++;
		else
			num0++;
	}
	if(num5 < 9 && num0 == 0)
		cout << "-1\n";
	else if(num5 < 9 && num0 != 0)
		cout << "0\n";
	else if(num0 == 0)
		cout << "-1\n";
	else
	{
		vector<int> ans;
		int div = num5/9;
		for(int i=0;i<div;i++)
		{
			for(int j=0;j<9;j++)
				ans.push_back(5);
		}
		for(int i=0;i<num0;i++)
			ans.push_back(0);
		for(int i=0;i<ans.size();i++)
			cout << ans[i];
	}
}