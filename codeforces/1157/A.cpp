#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	set<int> s;
	while(true)
	{
		if(s.find(n) != s.end())
			break;
		s.insert(n);
		n++;
		int flag = 0;
		while(n%10 == 0)
		{
			flag = 1;
			n /= 10;
		}
		if(flag == 1 && s.find(n) != s.end())
			break;
	}
	cout << s.size() << "\n";
}