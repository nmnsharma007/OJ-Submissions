#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	if(n <= 2){
		cout << "1\n";
		cout << "1\n";
	}
	else if(n == 3){
		cout << "2\n";
		cout << "1 3\n";
	}
	else if(n == 4){
		cout << "4\n";
		cout << "3 1 4 2\n";
	}
	else{
		cout << n << "\n";
		for(int i = 1;i <=n;i+=2){
			cout << i << " ";
		}
		for(int i = 2;i <= n; i+=2){
			cout << i << " ";
		}
		cout << "\n";
	}
}