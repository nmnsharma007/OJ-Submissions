#include<bits/stdc++.h>
using namespace std;
int main()
{
        int t;
        cin >> t;
        while(t--)
        {
            int n,k;
            cin >> n >> k;
            set<int> s;
            for(int i=0;i<n;i++)
            {
                int temp;
                cin >> temp;
                s.insert(temp);
            }
            if(s.size() > k)
                cout << "-1\n";
            else
            {
                cout << n*k << "\n";
                for(int j=0;j<n;j++)
                {
                     for(int b: s)
                     cout << b << " ";
                    for(int i=0;i<k-s.size();i++)
                     cout << "1 ";
                } 
                cout << "\n";
            }
        }
}