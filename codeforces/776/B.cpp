#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<bool> primes(N,true);
void soe()
{
	for(int i = 2; i * i <= N;i++){
		if(primes[i]){
			for(int p = i*i; p<= N;p+=i){
				primes[p] = false;
			}
		}
	}
}	
int main()
{
	soe();
	int n;
	cin >> n;
	int k = 1;
	int flag = 1;
	vector<int> ans(n+2,0);
	for(int i = 2; i <= n+1;i++){
		if(primes[i])
			ans[i] = 1;
		else{
			ans[i] = 2;
			flag = 0;
		}
	}
	if(flag == 0)
		cout << "2\n";
	else
		cout << "1\n";
	for(int i = 2;i<=n+1;i++){
		cout << ans[i] << " ";
	}
}