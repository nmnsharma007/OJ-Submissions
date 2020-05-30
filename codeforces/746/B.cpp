#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	vector<char> v(n);
	if(n%2)
	{
		v[(n-1)/2] = s[0];
		int left = (n-3)/2;
		int right = (n+1)/2;
		for(int i=1;i<n;i+=2)
			v[left--] = s[i];
		for(int i=2;i<n;i+=2)
			v[right++] = s[i];
	}
	else
	{
		v[n/2-1] = s[0];
		v[n/2] = s[1];
		int left = n/2 - 2;
		int right = n/2+1;
		for(int i=2;i<n;i+=2)
			v[left--] = s[i];
		for(int i=3;i<n;i+=2)
			v[right++] = s[i];
	}
	for(int i=0;i<n;i++)
		cout << v[i];
	cout << "\n";
}