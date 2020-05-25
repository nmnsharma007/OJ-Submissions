#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<pair<int,int> > v;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin >> x >> y;
		v.push_back(make_pair(x,y));
	}
	int count = 0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(v[i].second == v[j].first)
				count++;
			if(v[i].first == v[j].second)
				count++;
		}
	}
	cout << count;
}