#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int p = 0;
        int c = 0;
        int x,y;
        int flag = 1;
        for(int i = 0; i < n;i++)
        {
            cin >> x >> y;
            if(x < p || y < c || x-p < y-c)
                flag = 0;
            p = x;
            c = y;
        }
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
