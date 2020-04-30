/*#include<bits/stdc++.h>
using namespace std;
int check(string s)
{
    int n = s.length();
    int index;
    for(int i=0;i<n;i++)
    {
        if(s[i] <= '9' && s[i] >= '0')
        {
            index = i;
            break;
        }
    }
    int flag = 0;
    for(int i=index;i<n;i++)
    {
        if(s[i] <= 'Z' && s[i] >= 'A')
        {
            flag = 1;
            break;
        }
    }
    return flag;
}
int main()
{
    int n;
    cin >> n;
    string s;
    while(n--)
    {
        cin >> s;
        
    }
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y,r,x1,y1;
    cin >> r >> x >> y >> x1 >> y1;
    double d = sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
    int ans = ceil(d/(2*r));
    cout << ans;
}