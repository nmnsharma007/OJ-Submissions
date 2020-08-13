#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin >> n >> m;
	int a[n],b[m];
	for(int i = 0; i < n;++i){
		cin >> a[i];
	}
	for(int i = 0; i < m;++i){
		cin >> b[i];
	}
	int ans = -1;
	for(int k = 0; k < (1 << 9);++k){
		int flag = 1;
		for(int i = 0; i < n;++i){
			bool status = false;
			for(int j = 0; j < m;++j){
				int temp = a[i] & b[j];
				if((temp | k) == k){
					status = true;
					break;
				}
			}
			if(status == false){
				//cout << "reached" << "\n";
				flag = 0;
				break;
			}
		}
		if(flag){
			ans = k;
			break;
		}
	}
	cout << ans << "\n";
}
