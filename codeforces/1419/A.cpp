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
		string s;
		cin >> s;
		if(n%2 == 0){
			int flag = 0;
			for(int i = 1; i < n;i+=2){
				if((s[i]-'0')%2 == 0){
					flag = 1;
					break;
				}
			}
			if(flag)
				cout << "2\n";
			else
				cout << "1\n";
		}
		else{
			int flag = 0;
			for(int i = 0; i < n;i+=2){
				if((s[i]-'0')%2 == 1){
					flag = 1;
					break;
				}
			}
			if(flag)
				cout << "1\n";
			else
				cout << "2\n";
		}
	}
}
