#include<iostream>
using namespace std;
int main()
{
    int k2,k3,k5,k6;
    cin >> k2 >> k3 >> k5 >> k6;
    long long int sum = 0;
    int mini = min(min(k2,k5),k6);
    if(mini == 0)
    {
        if(k2 < k3)
            mini = k2;
        else
            mini = k3;
        if(k2 > 0 && k3 > 0)
            sum += (mini * 32);
    }
    else
    {
        k2 = k2 - mini;
        sum += (mini * 256);
        if(k2 > 0 && k3 > 0)
        {
            if(k3 < k2)
                mini = k3;
            else
                mini = k2;
            sum += (mini * 32);
        }
    }
    cout << sum;
}
