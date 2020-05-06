    #include<bits/stdc++.h>
    using namespace std;
    long long int freq[100001];
    long long int dp[100001];
    long long int calc(long long int n)
    {
        dp[0] = 0;
        dp[1] = freq[1];
        if(dp[n] != -1)
            return dp[n];
        return dp[n] = max(calc(n-1),calc(n-2) + freq[n]*n);
    }
    int main()
    {
        int n,x;
        cin >> n;
        long long int max = 0;
        for(int i=0;i<=100000;i++)
        {
            freq[i] = 0;
            dp[i] = -1;
        }
        for(int i=0;i<n;i++)
        {
            cin >> x;
            if(x >= max)
                max = x;
            freq[x]++;
        }
        long long int ans = calc(max);
        cout << ans;
    }