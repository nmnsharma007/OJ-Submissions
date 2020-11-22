#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll r1,c1,r2,c2;
	cin >> r1 >> c1 >> r2 >> c2;
	if(r1 == r2 && c1 == c2)
		cout << "0\n";
	else if(r1+c1 == r2+c2 || r1-c1 == r2-c2 || abs(r1-r2)+abs(c1-c2) <= 3)
		cout << "1\n";
	else if((r1+c1)%2 == (r2+c2)%2)
		cout << "2\n";
	else{
		bool exist = false;
		for(ll r = r1-3; r <= r1+3;++r){
			for(ll c = c1-3;c <= c1+3;++c){
				if(abs(r1-r)+abs(c1-c) > 3)
					continue;
				if(r+c == r2+c2)
					exist = true;
				else if(r-c == r2-c2)
					exist = true;
				else if(abs(r-r2)+abs(c-c2) <= 3)
					exist = true;
			}
		}
		if(exist)
			cout << "2\n";
		else
			cout << "3\n";	
	}
}
