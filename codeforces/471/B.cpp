#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int x;
	vector<pair<int,int>> v;
	set<int> s;
	for(int i=1;i<=n;i++)
	{
		cin >> x;
		v.push_back(make_pair(x,i));
		s.insert(x);
	}
	if(n-s.size() <= 1)
		cout << "NO";
	else
	{
		cout << "YES\n";
		sort(v.begin(),v.end());
		//vector<int> ans;
		//vector<pair<int,int> > index;
		//int index1,index2;
		int flag = 1;
		for(int i=0;i<v.size();i++)
		{
			cout << v[i].second << " ";
			if(i > 0 && v[i].first == v[i-1].first && flag)
			{
					swap(v[i].second,v[i-1].second);
					flag = 0;
			}	
				//index.push_back(make_pair(v[i].second,v[i+1].second));
		}
		cout << "\n";
		/*int index1 = index[0].first;
		int index2 = index[0].second;*/
		for(int i=0;i<v.size();i++)
		{
			cout << v[i].second << " ";
			if(i > 0 && v[i].first == v[i-1].first)
				swap(v[i].second,v[i-1].second);
				//index.push_back(make_pair(v[i].second,v[i+1].second));
		}
		cout << "\n";
		for(int i=0;i<v.size();i++)
			cout << v[i].second << " ";
		//cout << "\n";
	}
}
