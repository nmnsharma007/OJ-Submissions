#include<bits/stdc++.h>
using namespace std;
const int N = 10000000;
vector<bool> primes(N+1,true);
void soe()
{
    for(int i=2;i*i<=N;i++){
        if(primes[i] == true){
            for(int p=i*i;p<=N;p+=i){
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
    int i=2;
    while(n){
        if(primes[i]){
            cout << i << " ";
            n--;
        }
        i++;
    }
}