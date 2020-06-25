#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin >> n >> k;
	int arr[n+1];
	for(int i=1;i<=n;i++){
		cin >> arr[i];
	}
	vector<bool> dp(k+1);//dp[i] = true if we have i stones and first player to move wins
	for(int i=0;i<=k;i++){
		for(int j=1;j<=n;j++){
			if(i-arr[j] >= 0 && !dp[i-arr[j]])
				dp[i] = true;
		}
	}
	if(dp[k])
		cout << "First\n";
	else
		cout << "Second\n";
}