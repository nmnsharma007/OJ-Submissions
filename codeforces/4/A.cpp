#include<iostream>
using namespace std;
int main()
{
    int w;
    cin >> w;
    if(w == 2)
    {
        cout << "NO";
        return 0;
    }
    if(w % 4 == 0 || w % 4 == 2)
        cout << "YES";
    else
            cout << "NO";
}
