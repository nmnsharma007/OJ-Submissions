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
        vector<int> v(n);
        for(int i=0;i<n;i++)
            v[i] = i+1;
        vector<int> res;
        if(n >=4)
        {
            for(int i=0;i<n;i+=2)
            {
                res.push_back(v[i]);
            }
            for(int i=res.size()-1;i>=0;i--)
                cout << res[i] << " ";
            cout << "4 2 ";
            for(int i=5;i<n;i+=2)
                cout << v[i] << " ";
            cout << "\n";
        }
        else
            cout << "-1\n";
    }
}