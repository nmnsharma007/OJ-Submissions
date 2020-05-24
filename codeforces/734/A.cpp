#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int count_of_a = 0,count_of_d = 0;
	for(int i=0;i<n;i++)
	{
		if(s[i] == 'A')
			count_of_a++;
		else
			count_of_d++;
	}
	if(count_of_a > count_of_d)
		cout << "Anton";
	else if(count_of_a < count_of_d)
		cout << "Danik";
	else
		cout << "Friendship";
}