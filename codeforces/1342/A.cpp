        #include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            long long int t,a,b,x,y;
            cin >> t;
            while(t--)
            {
                cin >> x >> y;
                cin >> a >> b;
                long long int mini = min(x,y);
                long long  int maxi = max(x,y);
                long long int ans = mini*b;
                maxi = maxi - mini;
                ans += maxi*a;
                maxi = max(x,y);
                mini = min(x,y);
                ans = min(ans,(maxi-mini)*a + mini*b);
                maxi = max(x,y);
                mini = min(x,y);
                long long int temp = (maxi-mini)*a;
                if(b>2*a)
                    temp += (2*a*mini);
                else if(2*a>=b)
                    temp += (mini*b);
                ans = min(ans,temp);
                cout << ans << "\n";
            }
        }