#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int a[n],b[n];
        int index1 = 1000000;
        int index2 = 1000000;
        for(int i = 0; i < n;i++)
        {
            cin >> a[i];
            if(a[i] == -1 && index1 == 1000000)
                index1 = i;
            else if(a[i] == 1 && index2 == 1000000)
                index2 = i;
        }
        for(int i = 0; i < n;i++)
        {
            cin >> b[i];
        }
        int flag = 1;
        for(int i = 0; i < n;i++)
        {
            if(a[i] < b[i])
            {
                if(index2 >= i)
                {
                    flag = 0;
                    break;
                }
            }
            else if(a[i] > b[i])
            {
                if(index1 >= i)
                {
                    flag = 0;
                    break;
                }
            }
        }
        if(flag)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
}
