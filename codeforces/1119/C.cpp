#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int n,m;
	cin >> n >> m;
	int a[n][m],b[n][m];
	for(int i = 0; i < n;++i){
		for(int j = 0; j < m;++j){
			cin >> a[i][j];
		}
	}
	for(int i = 0; i < n;++i){
		for(int j = 0; j < m;++j){
			cin >> b[i][j];
		}
	}
	bool exist = true;
	for(int i = 0; i < n;++i){
		int cnt1 = 0,cnt2 = 0;
		for(int col = 0;col < m;++col){
			cnt1 += (a[i][col] == 1) ? 1 : 0;
			cnt2 += (b[i][col] == 1) ? 1 : 0;
		}
		if(cnt1%2 != cnt2%2){
			exist = false;
			break;
		}
	}
	for(int i = 0; i < m;++i){
		int cnt1 = 0,cnt2 = 0;
		for(int row = 0;row < n;++row){
			cnt1 += (a[row][i] == 1) ? 1 : 0;
			cnt2 += (b[row][i] == 1) ? 1 : 0;
		}
		if(cnt1%2 != cnt2%2){
			exist = false;
			break;
		}
	}
	if(exist)
		cout << "Yes\n";
	else
		cout << "No\n";
}