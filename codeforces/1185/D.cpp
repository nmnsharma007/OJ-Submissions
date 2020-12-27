#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<pair<int,int>> b(n);
	for(int i = 0; i < n;++i){
		int x;
		cin >> x;
		b[i] = {x,i};
	}
	if(n == 2){
		cout << "1\n";
		return 0;
	}
	sort(b.begin(),b.end());
	int ans = b[0].second+1;
	int d = b[2].first - b[1].first;
	for(int i = 3; i < n;++i){
		if(b[i].first - b[i-1].first != d){
			ans = -1;
			break;
		}
	}
	if(ans == -1){
		d = b[2].first - b[0].first;
		ans = b[1].second+1;
		for(int i = 3; i < n;++i){
			if(b[i].first - b[i-1].first != d){
				ans = -1;
				break;
			}
		}
		if(ans == -1){
			d = b[1].first - b[0].first;
			for(int i = 2; i < n;++i){
				if(b[i].first - b[i-1].first == d)
					continue;
				if(ans != -1){
					ans = -1;
					break;
				}
				if(i+1 < n){
					if(b[i+1].first - b[i-1].first == d){
						ans = b[i].second+1;
						++i;
					}
					else{
						ans = -1;
						break;
					}
				}
				else{
					ans = b[i].second+1;
					break;
				}
			}
		}
	}
	cout << ans << "\n";
}
