    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n,m,k;
        cin >> n >> m >> k;
        string ans = "";
        for(int i = 0; i < n-1; i++)
            ans += 'U';
        for(int i = 0; i < m-1;i++)
            ans += 'L';
        for(int i = 0; i < n;i++){
            if(i&1){
                for(int j = 0;j < m-1;j++)
                ans += 'L';
            }
            else{
                for(int j = 0; j < m-1;j++)
                    ans += 'R';
            }
            if(i+1 < n)
                ans += 'D';
        }
        cout << n+m+n*m-3 << "\n";
        cout << ans << "\n";
    }
