#include<iostream>
using namespace std;
int main()
{
    int q;
    long long int count = 0;
    long long int n;
    int flag = 0;
    cin >> q;
    while(q--)
    {
        cin >> n; 
        count = 0;
        flag = 0;
        while(n%5 == 0 && n!=1)
        {
            n /= 5;
            n *= 4;
            count++;
        }
        while(n%3 == 0 && n != 1)
        {
            n /= 3;
            n *= 2;
            count++;
        }
        while(n%2 == 0 && n!= 1)
        {
            n /= 2;
            count++;
        }
        if(n == 1)
            flag = 1;
        if(flag)
            cout << count << "\n";
        else
            cout << "-1\n";
    }
}