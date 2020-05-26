#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<string> s(n);
	set<string> s1;
	for(int i=0;i<n;i++)
	{
		cin >> s[i];
		s1.insert(s[i]);
	}
	vector<pair<string,int> >v(2);
	set<string,int> :: iterator it;
	int i = 0;
	for(it = s1.begin();it!=s1.end();it++)
	{
		v[i].first = *it;
		int count = 0;
		for(int j=0;j<n;j++)
		{
			if(*it == s[j])
				count++;
		}
		v[i].second = count;
		i++;
	}
	if(v[0].second > v[1].second)
		cout << v[0].first << "\n";
	else
		cout << v[1].first << "\n";
}