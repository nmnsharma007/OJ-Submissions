#include<bits/stdc++.h>
using namespace std;
int main()
{
    string time1,time2;
    cin >> time1 >> time2;
    int h1 = (time1[0]-'0')*10+(time1[1]-'0');
    int h2 = (time2[0]-'0')*10+(time2[1]-'0');
    int m1 = (time1[3]-'0')*10+(time1[4]-'0');
    int m2 = (time2[3]-'0')*10+(time2[4]-'0');
    int dif = abs(h2-h1)*60;
    dif += (m2-m1);
    dif /= 2;
    h1 = h1+dif/60;
    dif %= 60;
    if(m1+dif < 60)
        m1 += dif;
    else
    {
        m1 = (dif-60+m1);
        h1++;
    }
    string temp1 = to_string(h1);
    string temp2 = to_string(m1);
    if(temp1.length() < 2)
        temp1.insert(0,"0");
    if(temp2.length() < 2)
        temp2.insert(0,"0");
    string ans = temp1 + ":" + temp2;
    cout << ans << "\n";
}