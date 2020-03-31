#include<iostream>
using namespace std;
int main()
{
    int n,m,k;
    cin >> n >> m >> k;
    int arr[m+1];
    for(int i = 0; i < m+1;i++)
    {
        cin >> arr[i];
    }
    int fred;
    int temp,count,ans = 0;
    for(int i = 0; i < m;i++)
    {
        temp = arr[i];
        fred = arr[m];
        count = 0;
        for(int i = 0; i < n;i++)
        {
            if((temp & 1) != (fred & 1))
                count++;
            temp = temp >> 1;
            fred = fred >> 1;
        }
        if(count <= k)
            ans++;
    }
    cout << ans;
}
