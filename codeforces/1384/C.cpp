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
		string a,b;
		cin >> a >> b;
		int flag = 1;
		for(int i = 0; i < n;++i){
			if(a[i] == b[i])
				continue;
			if(a[i] > b[i]){
				flag = 0;
				break;
			}
		}
		if(flag == 0)
			cout << "-1\n";
		else{
			int ans = 0;
			for(char c = 'a';c <= 't';++c){
				int flag = 0;
				char temp = 'z';
				for(int j = 0; j < n;++j){
					if(a[j] == b[j])
						continue;
					if(a[j] == c){
						flag = 1;
						temp = min(temp,b[j]);
					}
				}
				if(flag == 0)
					continue;
				++ans;	
				for(int j = 0; j < n;++j){
					if(a[j] == b[j])
						continue;
					if(a[j] == c)
						a[j] = temp;
				}
			}
			cout << ans << "\n";
		}
	}
}