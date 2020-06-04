#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin >> n >> k;
	int arr[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	queue<int> q;
	set<int> s;
	for(int i=0;i<n;i++)
	{
		if(s.find(arr[i]) != s.end())
			continue;
		if(q.size() < k)
		{
			q.push(arr[i]);
			s.insert(arr[i]);
		}
		else
		{
			int temp = q.front();
			q.pop();
			s.erase(temp);
			q.push(arr[i]);
			s.insert(arr[i]);
		}
	}
	cout << q.size() << "\n";
	vector<int> ans;
	while(!q.empty())
	{
		int temp = q.front();
		q.pop();
		ans.push_back(temp);
		//cout << temp << " ";
	}
	for(int i=ans.size()-1;i>=0;i--)
		cout << ans[i] << " "; 
}