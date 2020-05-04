#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        set<int> s;
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
            s.insert(arr[i]);
        }
        sort(arr,arr+n);
        int count = 1;
        int max_count = 1;
        int i=1;
        while(i<n)
        {
            if(arr[i]==arr[i-1])
                count++;
            else
            {
                max_count = max(count,max_count);
                count = 1;
            }
            i++;
        }
        max_count = max(count,max_count);
        int dist = s.size() - 1;
        if(dist >= max_count)
            cout << max_count << "\n";
        else
        {
            max_count--;
            dist++;
            cout << min(dist,max_count) << "\n";
        }
    }
}
