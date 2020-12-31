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
		if(n == 7)
			cout << "0 0 1\n";
		else{
			int a = -1,b;
			for(int i = 0;;++i){
				int temp = n-5*i;
				if(temp < 0)
					break;
				if(temp%3 == 0){
					a = temp/3;
					b = i;
					break;
				}
			}
			if(a == -1)
				cout << "-1\n";
			else
				cout << a << " " << b << " 0\n";
		}
	}
}
