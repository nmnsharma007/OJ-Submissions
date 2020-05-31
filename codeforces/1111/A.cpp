#include<bits/stdc++.h>
using namespace std;
bool isVowel(char c)
{
	if(c == 'u' || c == 'o' || c == 'i' || c == 'a' || c == 'e')
		return true;
	else
		return false;
}
bool isConsonant(char c)
{
	if(c != 'u' && c != 'a' && c != 'e' && c != 'i' && c != 'o')
		return true;
	else 
		return false;
}
int main()
{
	string s,t;
	cin >> s >> t;
	if(s.length() != t.length())
		cout << "No\n";
	else
	{
		int flag = 1;
		for(int i=0;i<s.length();i++)
		{
			if((isVowel(s[i]) && isVowel(t[i])) || (isConsonant(s[i]) && isConsonant(t[i])))
				continue;
			else
			{
				flag = 0;
				break;
			}
		}
		if(flag)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}