#include<bits/stdc++.h>
using namespace std;
int main()
{
	set<char> s;
	string c;
	getline(cin,c);
	int n = c.length();
	for(int i=0;i<n;i++)
	{
		if(c[i] <= 'z' && c[i] >= 'a')
			s.insert(c[i]);
	}
	cout << s.size();
}