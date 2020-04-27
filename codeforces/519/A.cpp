#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s[8];
    for(int i=0;i<8;i++)
    {
        cin >> s[i];
    }
    map<char,int> mp;
    mp.insert({'Q',9});
    mp.insert({'R',5});
    mp.insert({'B',3});
    mp.insert({'N',3});
    mp.insert({'P',1});
    mp.insert({'q',9});
    mp.insert({'r',5});
    mp.insert({'b',3});
    mp.insert({'n',3});
    mp.insert({'p',1});
    mp.insert({'k',0});
    mp.insert({'K',0});
    int ww = 0;
    int bw = 0;
    for(int i=0;i<8;i++)
    {
        string a = s[i];
        for(int j=0;j<8;j++)
        {
            if(a[j] != '.')
            {
                if(a[j] >= 65 && a[j] <= 90)
                {
                    ww += mp[a[j]];
                }
                else if(a[j] >= 97 && a[j] <= 122)
                {
                    bw += mp[a[j]];
                }
            }
        }
    }
    if(bw > ww)
        cout << "Black";
    else if(ww>bw)
        cout << "White";
    else
        cout << "Draw";
}