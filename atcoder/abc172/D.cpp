#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
const int N = 1e7+1;
vector<bool> primes(N);
void soe()
{
	for(int i=2;i<=N;i++){
		primes[i] = true;
	}
	for(int i=2;i*i<=N;i++){
		if(primes[i]){
			for(int p=i*i;p<=N;p+=i){
				primes[p] = false;
			}
		}
	}
	//cout << "primes[2]:" << primes[2] << "\n";
}
bool is_square(int n)
{
	int temp = sqrt(n);
	return temp*temp == n;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	soe();
	int n;
	cin >> n;
	ll ans = 1;
	for(int i=2;i <= n;i++){
		int temp = i;
		ll tmp = 1;
		for(int j=2;;j++){
			if(!primes[j])
				continue;
			if(j*j*j > temp)
				break;
			ll count = 1;
			while(temp%j == 0){
				temp /= j;
				count++;
			}
			//cout << "count:" << count << "\n";
			tmp *= count;
		}
		//cout << "primes[2]:" << primes[2] << "\n";
		//cout << "temp:" << temp << "\n";
		if(primes[temp])
			tmp *= 2LL;
		else if(is_square(temp) && primes[sqrt(temp)])
			tmp *= 3LL;
		else if(temp != 1)
			tmp *= 4LL;
		//cout << "No of divisors of :" << i << " are " << tmp << "\n";
	//	cout << "tmp:" << tmp << "\n";
		//cout << "ans:" << ans << "\n";
		ans += (ll)i * tmp;
	}
	cout << ans << "\n";
	return 0;
}