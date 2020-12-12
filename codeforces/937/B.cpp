#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	int p,y;
	cin >> p >> y;
	while(y > p){
		int fact = 1;
		for(int i = 2; i*i <= y;++i){
			if(y%i == 0){
				fact = i;
				break;
			}
		}
		if(fact == 1 || fact > p){
			cout << y << "\n";
			return 0;
		}
		--y;
	}
	cout << "-1\n";
}
