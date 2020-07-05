#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e6;
vector<bool> primes(N+1);
void soe()
{
    for(int i = 0;i <= N;i++)
        primes[i] = true;
    for(int i = 2;i*i <= N;i++){
        if(primes[i] == true){
            for(int p = i*i;p <= N;p += i){
                primes[p] = false;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    soe();
    ll n;
    cin >> n;
    vector<ll> divisors;
    for(ll i = 1;i*i <= n;i++){
        if(n%i == 0){
            divisors.push_back(i);
            if(i != n/i)
                divisors.push_back(n/i);
        }
    }
    sort(divisors.begin(),divisors.end());
    vector<ll> squares;
    for(ll i = 2; i <= N;i++){
          squares.push_back(i*i);
    }
    int flag = 1;
    int len = divisors.size();
    ll ans = -1;
    for(int j = len-1;j >= 0;j--){
        flag = 1;
        ll temp = divisors[j];
        for(int i = 0;i < (int)squares.size();i++){
            if(temp%squares[i] == 0){
                flag = 0;
                break;
            }
        }
        if(flag){
            ans = temp;
            break;
        }
    }
    cout << ans << "\n";
}
