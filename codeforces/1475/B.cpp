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
		bool flag = false;
		for(int i = 0; i <= 1000;++i){
			int num = 2020*i;
			int rem = n-num;
			if(rem >= 0 && rem%2021 == 0){
				flag = true;
				break;
			}
		}
		if(flag)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
