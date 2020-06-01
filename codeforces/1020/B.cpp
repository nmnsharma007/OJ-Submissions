#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n+1];
	for(int i=1;i<=n;i++)
		cin >> arr[i];
	int freq[n+1];
	//memset(freq,0,sizeof(freq));
	vector<int> ans;
	for(int i=1;i<=n;i++)
	{
		int temp = arr[i];
		//freq[temp] = 1;
		memset(freq,0,sizeof(freq));
		freq[i] = 1;
		while(!freq[temp])
		{
			freq[temp] = 1;
			temp = arr[temp];
		}
		ans.push_back(temp);
	}
	for(int i=0;i<ans.size();i++)
		cout << ans[i] << " ";
}