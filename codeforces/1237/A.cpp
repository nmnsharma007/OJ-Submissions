#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int ocount = 0;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        if(arr[i]&1)
        {
            if(ocount&1)
                arr[i] = (arr[i]+1)/2;
            else
                arr[i] = (arr[i]-1)/2;
            ocount++;
        }
        else
            arr[i] /= 2;
    }
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
}