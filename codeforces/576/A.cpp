#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool is_prime(int n)
{
	if(n <= 3)
		return true;
	if(n%2 == 0 || n%3 == 0)
		return false;
	for(int i = 5; i*i <= n;i+=6){
		if(n%i == 0 || n%(i+2) == 0)
			return false;
	}
	return true;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(nullptr);
	int n;
	cin >> n;
	vector<int> ans;
	for(int i = 2; i <= n;++i){
		if(is_prime(i)){
			int temp = i;
			while(temp <= n){
				ans.push_back(temp);
				temp = temp * i;
			}
		}
	}
	cout << (int)ans.size() << "\n";
	for(auto x : ans)
		cout << x << " ";
	cout << "\n";
}
