#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int end = s.length() - 1;
	int start = 0;
	int count = 0;
	while(start <= end)
	{
		if(s[start++] != s[end--])
			count++;
	}
	if(count >= 2)
		cout << "NO\n";
	else if(count == 1)
		cout << "YES\n";
	else if(s.length()%2)
		cout << "YES\n";
	else
		cout << "NO\n";		
}