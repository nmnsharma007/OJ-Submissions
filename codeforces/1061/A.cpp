#include<iostream>
using namespace std;
int main()
{
    int s,n;
    cin >> n >> s;
    int count = 0;
    while(s)
    {
        count +=  s/n;
        s %= n;
        n--;
    }
    cout << count;
}