#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    long long int suf_gcd[n];
    suf_gcd[n-1] = arr[n-1];
    for(int i=n-2;i>=0;i--)
        suf_gcd[i] = __gcd(arr[i],suf_gcd[i+1]);
    vector<long long int> v;
    for(int i=0;i<= n-2;i++)
    {
        long long int temp = (arr[i] * suf_gcd[i+1])/ (__gcd(arr[i],suf_gcd[i+1]));
        v.push_back(temp);
    }
    /*for(int i=0;i<v.size();i++)
        cout << v[i] << " ";*/
    int m = v.size();
    long long int ans = v[0];
    for(int i=1;i<m;i++)
        ans = __gcd(ans,v[i]);
    cout << ans;
    /*for(int i=1;i<=n-1;i++)
        cout << suf_gcd[i] << " ";*/
}