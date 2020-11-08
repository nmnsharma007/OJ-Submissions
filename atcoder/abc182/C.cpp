#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin >> n;
	int ocount = 0,tcount = 0,k = 0;
	vector<int> digits;
	int sum = 0;
	while(n > 0){
		int rem = n%10LL;
		digits.push_back(rem);
		n /= 10LL;
		sum += rem;
		if(rem%3 == 1)
			++ocount;
		if(rem%3 == 2)
			++tcount;
		++k;
	}
	if(sum%3 == 0)
		cout << "0\n";
	else if(sum%3 == 1){
		if(ocount >= 1 && k > 1)
			cout << "1\n";
		else if(tcount >= 2 && k > 2)
			cout << "2\n";
		else
			cout << "-1\n";
	}
	else{
		if(tcount >= 1 && k > 1)
			cout << "1\n";
		else if(ocount >= 2 && k > 2)
			cout << "2\n";
		else
			cout << "-1\n";
	}
}
