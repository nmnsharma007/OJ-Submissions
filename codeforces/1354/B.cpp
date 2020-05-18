#include<bits/stdc++.h>
using namespace std;
bool isValid(string s,int len)
{
	int arr[4] = {0,0,0,0};
	for(int i=0;i<len-1;i++)
		arr[s[i] - '0']++;
	for(int i=len-1;i<s.length();i++)
	{
		arr[s[i]-'0']++;
		if(arr[1] && arr[2] && arr[3])
			return true;
		arr[s[i-len+1] - '0']--;
	}
	return false;
}
int solve(string s)
{
	int res = 10000000;
	int left = 3;
	int right = s.length();
	while(left <= right)
	{
		int mid = (left+right)/2;
		if(isValid(s,mid))
		{
			res = min(res,mid);
			right = mid-1;
		}
		else
			left = mid+1;
	}
	if(res == 10000000)
		return 0;
	else
		return res;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		int ans = solve(s);
		cout << ans << "\n";
	}
}
