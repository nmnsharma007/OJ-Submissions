#include<bits/stdc++.h>
using namespace std;
int power(int x,int y)
{
	if(y == 0)
		return 1;
	if(y == 1)
		return x;
	return x*power(x,y-1);
}
int main()
{
	string s;
	cin >> s;
	int n = s.length();
	vector<int> v;
	for(int i=0;i<n;i++)
		v.push_back(s[i]-'0');
	int rem = v[0]%4;
	for(int i=1;i<n;i++)
		rem = (rem*10+v[i])%4;
	int ans = 0;
	for(int i=1;i<5;++i)
		ans = (ans + power(i,rem))%5;
	cout << ans%5 << "\n";
}