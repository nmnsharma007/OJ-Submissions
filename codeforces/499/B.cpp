#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    string lang1[m],lang2[m],text[n];
    for(int i = 0; i < m;i++)
    {
        cin >> lang1[i] >> lang2[i];
    }
    for(int i = 0; i < n;i++)
    {
        cin >> text[i];
    }
    int index;
    for(int i = 0; i < n;i++)
    {
        string s = text[i];
        for(int j = 0; j < m;j++)
        {
            if(s == lang1[j])
            {
                index = j;
                break;
            }
        }
        if(lang1[index].length() > lang2[index].length())
            cout << lang2[index] << " ";
        else
            cout << lang1[index] << " ";
    }
}
