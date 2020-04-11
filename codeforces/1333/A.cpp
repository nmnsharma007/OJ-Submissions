    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t,n,m;
        cin >> t;
        while(t--)
        {
            cin >> n >> m;
            string s(m,'B');
            vector<string> v(n,s);
            v[0][0] = 'W';
            for(int i = 0; i < n;i++)
            {
                for(int j = 0; j < m;j++)
                {
                    cout << v[i][j];
                }
                cout << "\n";
            }
        }
    }