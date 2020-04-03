#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    vector<int> index1,index2;
    for(int i = 0; i < n;i++)
    {
        if(arr[0] == arr[i])
            index1.push_back(i);
        if(arr[n-1] == arr[i])
            index2.push_back(i);
    }
    long long int ans = 0;
    for(int i = 0; i < index1.size();i++)
    {
        ans += index2.end() - lower_bound(index2.begin(),index2.end(),index1[i] + 1);
    }
    cout << arr[n-1] - arr[0] << " " << ans;
}
