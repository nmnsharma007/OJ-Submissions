#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,l;
    cin >> n >> m;
    int arr[n];
    int freq[100001];
    for(int i = 1; i < 100001;i++)
    {
        freq[i] = 0;
    }
    for(int i = 0; i < n;i++)
    {
        cin >> arr[i];
        freq[arr[i]] = 1;
    }
    int ans[n];
    int count = 0;
    for(int i = n-1;i >= 0;i--)
    {
        if(freq[arr[i]])
        {
            count++;
            freq[arr[i]] = 0;
        }
        ans[i] = count;
    }
    while(m--)
    {
        cin >> l;
        cout << ans[l-1] << "\n";
    }
}
