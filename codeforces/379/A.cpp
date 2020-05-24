#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    int ans = a;
    int num_of_candles = a;
    int rem = 0;
    int temp = a;
    while(num_of_candles)
    {
        temp = num_of_candles+rem;
        num_of_candles = temp/b;
        rem = temp%b;
        ans += num_of_candles;
    }
    cout << ans << "\n";
}
