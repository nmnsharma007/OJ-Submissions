#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<string,int> mp;
	pair<string,int> p;
	p = make_pair("Tetrahedron",4);
	mp.insert(p);
	p = make_pair("Cube",6);
	mp.insert(p);
	p = make_pair("Octahedron",8);
	mp.insert(p);
	p = make_pair("Dodecahedron",12);
	mp.insert(p);
	p = make_pair("Icosahedron",20);
	mp.insert(p);
	int n;
	cin >> n;
	int ans = 0;
	for(int i=0;i<n;i++)
	{
		string s;
		cin >> s;
		ans += mp[s];
	}
	cout << ans << "\n";
}