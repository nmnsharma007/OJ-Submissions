#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n0,n1,n2;
        cin >> n0 >> n1 >> n2;
        vector<string> v; 
        if(n2)
        {
            for(int i=0;i<=n2;i++)
                v.push_back("1");
            if(n0)
            {
                n1--;
                for(int i=0;i<=n0;i++)
                    v.push_back("0");
                if(n1)
                {
                    v.push_back("1");
                    n1--;
                    for(int i=0;i<n1;i++)
                    {
                        if(i%2==0)
                            v.push_back("0");
                        else
                            v.push_back("1");
                    }
                }
            }
            else if(n1)
            {
                v.push_back("0");
                n1--;
                for(int i=0;i<n1;i++)
                {
                    if(i%2==0)
                        v.push_back("1");
                    else
                        v.push_back("0");
                }
            }
        }
        else
        {
            for(int i=0;i<=n0;i++)
            {
                v.push_back("0");
            }
            if(n1)
            {
                v.push_back("1");
                n1--;
                for(int i=0;i<n1;i++)
                {
                    if(i%2==0)
                        v.push_back("0");
                    else    
                        v.push_back("1");
                }
            }
        }
        for(int i=0;i<v.size();i++)
            cout << v[i];
        cout << "\n"; 
    }
}