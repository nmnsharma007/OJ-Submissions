#include<bits/stdc++.h>
using namespace std;
int order(string s1,string s2)
{
    int i = 0;
    while(i < s1.length())
    {
        if(s1[i] > s2[i])
            return 1;
        else if(s1[i] < s2[i])
            return -1;
        i++;
    }
    return 0;
}
int main()
{
    string s1,s2;
    cin >> s1;
    cin >> s2;
    for(int i = 0; i < s1.length();i++)
    {
        if(s1[i] >= 'A' && s1[i] <= 'Z')
            s1[i] += 32;
        if(s2[i] >= 'A' && s2[i] <= 'Z')
            s2[i] += 32;
    }
    int tmp = order(s1,s2);
    cout << tmp;
}

