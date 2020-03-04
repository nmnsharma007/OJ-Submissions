#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string que = "hello";
    int count = 0;
    int k = 0;
    int i = 0;
    while(i < s.length())
    {
        if(s[i] == que[k])
        {
            k++;
            count++;
        }
        i++;
    }
    if(count == que.length())
        cout << "YES" ;
    else
        cout << "NO";
}
