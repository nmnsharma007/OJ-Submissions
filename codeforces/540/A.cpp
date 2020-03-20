#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string que,ans;
    cin >> que;
    cin >> ans;
    int count = 0;
    for(int i = 0; i < n;i++)
    {
        count += min(abs(que[i]-ans[i]),10-abs(que[i] - ans[i]));
    }
    cout << count;
}
