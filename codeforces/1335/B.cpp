#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,a,b;
		cin >> n >> a >> b;
		string s="",t="";
		for(int i=0;i<=a-b;i++)
			s += 'a';
		for(int i=1;i<=b-1;i++)
			s += 'a' + i;
		for(int i=0;i<n;i++)
			t += s[i%a];
		cout << t << "\n";
	}
}