#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
const int N = 1e3+1;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string a[n];
		for(int i = 0; i < n;++i){
			cin >> a[i];
		}
		string b[n];
		for(int i = 0; i < n;++i){
			cin >> b[i];
		}
		for(int row = 0;row < n;++row){
			if(a[row][0] != b[row][0]){
				for(int col = 0;col < n;++col){
					if(a[row][col] == '0')
						a[row][col] = '1';
					else
						a[row][col] = '0';
				}
			}
		}
		bool flag = true;
		for(int col = 1;col < n;++col){
			if(a[0][col] != b[0][col]){
				for(int row = 0;row < n;++row){
					if(a[row][col] == '0')
						a[row][col] = '1';
					else
						a[row][col] = '0';
				}
			}
		}
		for(int row = 0;row < n;++row){
			for(int col = 0;col < n;++col){
				if(a[row][col] != b[row][col]){
					flag = false;
					break;
				}
			}
			if(flag == false)
				break;
		}
		cout << ((flag) ? "YES" : "NO") << "\n";
	}
}
