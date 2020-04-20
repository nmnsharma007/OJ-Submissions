#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    int n;
    map<string,int> m;
    cin >> n;
    string s;
    for(int i = 0; i < n;i++)
    {
        cin >> s;
        if(m.count(s) == 0)
        {
            cout << "OK" << "\n";
            m[s] = 1;
        }
        else
        {
            cout << s << m[s] << "\n";
            m[s] += 1;
        }
    }
}