#include<iostream>
using namespace std;
int main()
{
    int t,n,x,a;
    cin >> t;
    while(t--)
    {
        cin >> n >> x;
        int freq[10001];
        for(int i = 1; i < 10001;i++)
        {
            freq[i] = 0;
        }
        for(int i = 0; i < n;i++)
        {
            cin >> a;
            freq[a] = 1;
        }
        int index;
        for(int i = 1;i < 10001;i++)
        {
            if(freq[i] == 0)
                x--;
            if(x == 0)
            {
                index = i;
                break;
            }
        }
        int ans = index;
        for(int i = index + 1; i < 10001;i++)
        {
            if(freq[i] == 1)
            {
                ans = i;
            }
            else
                break;
        }
        /*for( i = index; i < 10001;i++)
        {
            if(freq[i] == 1)
            {
                ans = i;
            }
            else
                break;
        }*/
        cout << ans << "\n";
    }
}
