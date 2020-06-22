#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,y;
	cin >> n >> x >> y;
	string s;
	cin >> s;
	int arr[n];
	for(int i=0;i<n;i++){
		arr[i] = s[i]-'0';
	}
	int ans = 0;
	for(int i=n-x;i<n;i++){
		if(arr[i] == 1)
			ans++;
	}
	if(arr[n-y-1] == 0)
		ans++;
	else
		ans--;
	cout << ans << "\n";
}