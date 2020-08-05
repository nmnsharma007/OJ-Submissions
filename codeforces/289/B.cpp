#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m,d;
	cin >> n >> m >> d;
	int matrix[n*m+1];
	int k = 1;
	for(int i = 0; i < n;++i){
		for(int j = 0; j < m;++j){
			int x;
			cin >> x;
			matrix[k++] = x;
		}
	}
	int flag = 1;
	sort(matrix+1,matrix+n*m+1);
	for(int i = 2; i <= m*n;++i){
		int prev = matrix[i-1]%d;
		int rem = matrix[i]%d;
		if(prev != rem)
			flag = 0;
	}
	int ans;
	if(flag == 0)
		ans = -1;
	else{
		ans = 0;
		int target = matrix[(m*n)/2 + 1];
		for(int i = 1; i <= m*n;++i){
			ans += abs(matrix[i]-target)/d;
		}
	}
	cout << ans << "\n";
}