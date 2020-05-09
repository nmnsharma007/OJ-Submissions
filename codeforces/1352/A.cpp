#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        int arr[n];
        for(int i=0;i<n;i++)
            arr[i] = s[i] - '0';
        int count = 0;
        int place = pow(10,n-1);
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            if(arr[i])
            {
                int temp = place * arr[i];
                v.push_back(temp);
            }
            place /= 10;
        }
        cout << v.size() << "\n";
        for(int i=0;i<v.size();i++)
            cout << v[i] << " ";
        cout << "\n";
    }
}