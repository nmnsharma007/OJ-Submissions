#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int freq[26];
    for(int i = 0; i < 26;i++)
    {
        freq[i] = -1;
    }
    int count = 0;
    for(int i = 0; i < s.length();i++)
    {
        char c = s[i];
        if(freq[c-'a'] != 0)
        {
            freq[c-'a'] = 0;
            count++;
        }
    }
    if(count % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}
