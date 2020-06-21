#include<bits/stdc++.h>
using namespace std;
const int N = 100000;
vector<bool> primes(N+1,true);
void soe()
{
    
    for(int i=2;i*i<=N;i++){
        if(primes[i] == true){
            for(int p=i*i;p<=N;p+=i)
                primes[p] = false;
        }
    }
}
int main()
{
    soe();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n == 1)
            cout << "FastestFinger\n";
        else if(n == 2)
            cout << "Ashishgup\n";
        else if(n&1)
            cout << "Ashishgup\n";
        else{
            int temp = n;
            int power = 0;
            while(temp%2 == 0){
                temp /= 2;
                power++;
            }
            if(power >= 2 && temp > 1)
                cout << "Ashishgup\n";
            else if(temp == 1 && power >= 2) 
                cout << "FastestFinger\n";
            else{
                n /= 2;
                int flag = 0;
                for(int i=2;i*i<=n;i++){
                    if(n%i == 0 && primes[i]){
                        flag = 1;
                        break;
                    }
                }
                if(flag)
                    cout << "Ashishgup\n";
                else
                    cout << "FastestFinger\n";
            }
        }
    }
}