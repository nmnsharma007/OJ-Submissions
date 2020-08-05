#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m,d;
	cin >> n >> m >> d;
	int matrix[n][m];
	for(int i = 0; i < n;++i){
		for(int j = 0; j < m;++j){
			cin >> matrix[i][j];
		}
	}
	int ans = 1e9+7;
	int flag = 0;
	for(int i = 1; i <= 1e4;++i){
		bool status = true;
		int temp = 0;
		for(int row = 0; row < n;++row){
			for(int col = 0; col < m;++col){
				if(abs(matrix[row][col] - i)%d){
					status = false;
					break;
				}
				temp += abs((matrix[row][col]-i))/d;
			}
			if(status == false)
				break;
		}
		if(status){
			ans = min(ans,temp);
			flag = 1;
		}
	}
	if(flag == 0)
		ans = -1;
	cout << ans << "\n";
}