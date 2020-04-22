#include<bits/stdc++.h>
using namespace std;
int sgn(int x)
{
    if(x < 0)
        return -1;
    else
        return 1;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        long long int sum = 0;
        int temp;
        int i = 0;
        while(i<n)
        {
            int j = i;
            temp = arr[i];
            while(j < n && sgn(arr[i]) == sgn(arr[j]))
            {
                temp = max(arr[j],temp);
                j++;
            }
            sum += temp;
            i = j;
        }
        cout << sum << "\n";
    }
}
