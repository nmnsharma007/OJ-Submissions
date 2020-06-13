#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    cin >> n >> x >> y;
    unsigned int arr[n+1];
    for(int i=1;i<=n;i++)
        cin >> arr[i];
    int index;
    for(int d=1;d<=n;d++)
    {
        int start = max(d-x,1);
        int end = min(d+y,n);
        index = d;
        for(int i=start;i<=end;i++)
        {
            if(arr[i] < arr[index])
                index = i;
        }
        if(index == d)
            break;
    }
    cout << index << "\n";
}