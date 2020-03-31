#include<iostream>
using namespace std;
int sum(int n)
{
    int sum = 0;
    while(n)
    {
        sum += (n%10);
        n /= 10;
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int k;
    cin >> k;
    for(int i = 1; i <= 100000000;i++)
    {
        if(sum(i) == 10)
            k--;
        if(k == 0)
        {
            cout << i;
            break;
        }
    }
}
