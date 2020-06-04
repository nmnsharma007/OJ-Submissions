#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	set<int> s;
	for(int i=0;i<n;i++)
	{
		int x;
		cin >> x;
		s.insert(x);
	}
	set<int> :: iterator it;
	vector<int> v;
	for(it = s.begin();it != s.end();it++)
		v.push_back(*it);
	sort(v.begin(),v.end());
	if(v.size() >= 4)
		cout << "-1\n";
	else if(v.size() == 1)
		cout << "0\n";
	else if	(v.size() == 2)
	{
		if((v[1]-v[0])%2 == 0)
			cout << (v[1]-v[0])/2 << "\n";
		else
			cout << v[1]-v[0] << "\n";
	}
	else
	{
		if(v[2]-v[1] == v[1]-v[0])
			cout << v[2]-v[1] << "\n";
		else
			cout << "-1\n";
	}
}