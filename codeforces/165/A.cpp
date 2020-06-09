#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<pair<int,int> > p;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin >> x >> y;
		p.push_back(make_pair(x,y));
	}
	int count = 0;
	int len = p.size();
	for(int i=0;i<len;i++)
	{
		int x = p[i].first;
		int y = p[i].second;
		int flagl,flagr,flagu,flagd;
		flagl = flagr = flagu = flagd = 0;
		for(int j=0;j<len;j++)
		{
			int x1 = p[j].first;
			int y1 = p[j].second;
			if(y == y1 && x1 > x)
				flagr++;
			if(y == y1 && x1 < x)
				flagl++;
			if(x == x1 && y1 > y)
				flagu++;
			if(x == x1 && y1 < y)
				flagd++;
		}
		if(flagl && flagr && flagd && flagu)
			count++;
	}
	cout << count << "\n";
}