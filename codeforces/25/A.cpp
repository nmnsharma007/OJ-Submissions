#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n+1];
    vector<int> ecount,ocount;
    for(int i=1;i<=n;i++)
    {
        cin >> arr[i];
        if(arr[i]%2==0)
            ecount.push_back(i);
        else
            ocount.push_back(i);
    }
    if(ecount.size()==1)
        cout << ecount[0];
    else
        cout << ocount[0];
}