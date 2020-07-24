#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[2*n+1];
		vector<pair<int,int> > pos;
		for(int i = 1; i <= 2*n;++i){
			cin >> arr[i];
			pos.push_back({arr[i],i});
		}
		sort(pos.begin(),pos.end());
	//	cout << pos[pos.size()-1].second << "\n";
		int prev = pos[pos.size()-1].second;
		vector<int> len(2*n+1);
		int k = 1;
		len[k++] = 2*n - prev + 1;
		for(int i = pos.size()-2; i >= 0;--i){
			if(pos[i].second >= prev)
				continue;
			len[k++] = prev-pos[i].second;
			prev = pos[i].second;
		}
		int tot = 0;
		//cout << "No of suffixes: " << k-1 << "\n";
		for(int i = 1; i < k;++i)
			tot += len[i];
//		for(int i = 1; i < k;++i){
//			cout << len[i] << " ";
//		}
//		cout << "\n";
		--k;
		bool dp[k+1][tot+1];//dp[i][j] shows if sum of j occurs with subset for elements 0....i
		memset(dp,false,sizeof(dp));
		dp[0][0] = true;
		for(int i = 1; i <= k;++i)
			dp[i][0] = true;
		for(int i = 1; i <= k;++i){
			for(int j = 1; j <= tot;++j){
				if(len[i] > j)
					dp[i][j] = dp[i-1][j];
				else
					dp[i][j] = dp[i-1][j] || dp[i-1][j-len[i]];
			//	cout << "Number: " << i << " Sum: " << j << " " << dp[i][j] << "\n";
			}
		}
		if(dp[k][n])
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}