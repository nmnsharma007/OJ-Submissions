#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,a;
    cin >> n;
    long long int sum[n+1];
    sum[0] = 0;
    for(int i = 1; i <= n;i++)
    {
        cin >> a;
        sum[i] = sum[i-1] + a;
    }
    vector<int> index1,index2;
    if(sum[n] % 3 != 0)
        cout << "0" << "\n";
    else
    {
        long long int sum1 = sum[n]/3;
        long long int sum2 = 2*sum1;
        for(int i = 1; i < n;i++)
        {
            if(sum1 == sum[i])
                index1.push_back(i);
            if(sum2 == sum[i])
                index2.push_back(i);
        }
        long long int count = 0;
        for(int i = 0; i < index1.size();i++)
        {
            count += index2.end() - lower_bound(index2.begin(),index2.end(),index1[i] + 1);
        }
        cout << count << "\n";
    }
}
