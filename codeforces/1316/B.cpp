#include<bits/stdc++.h>
using namespace std;
string modified(string s,int n,int k)
{
    string ans_prefix = s.substr(k-1,n-k+1);
    string ans_suffix = s.substr(0,k-1);
    if(n % 2 == k % 2)
        reverse(ans_suffix.begin(),ans_suffix.end());
    return ans_prefix + ans_suffix;
}
int main()
{
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        string s;
        cin >> s;
        string best_s = modified(s,n,1);
        int best_k = 1;
        for(int k = 2;k <= n;k++)
        {
            string temp = modified(s,n,k);
            if(temp < best_s)
            {
                best_s = temp;
                best_k = k;
            }
        }
        cout << best_s << endl;
        cout << best_k << endl;
    }
}
