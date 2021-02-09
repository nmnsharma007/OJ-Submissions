#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int x = -1,y = -1;
	int ans = 0;
	for(int i = 0; i < n;++i){
		int z;
		cin >> z;
		if(x == z){
			if(y != z){
				y = z;
				++ans;
			}
		}
		else{
			if(y == z){
				x = z;
				++ans;
			}
			else{
				if(x != y)
					y = -1;
				x = z;
				++ans;
			}
		}
	}
	cout << ans << "\n";
}
