#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,d,x;
    cin >> n >> b >> d;
    vector<int> v;
    long long int sum = 0;
    int count = 0;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        if(x<=b)
            {
                sum += x;
            }
        if(sum > d)
        {
            count++;
            sum = 0;
        }
    }
    cout << count;
}