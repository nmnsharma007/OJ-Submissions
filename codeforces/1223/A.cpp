#include<iostream>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        if(n == 2)
            cout << "2" << "\n";
        else if(n % 2 == 1)
            cout << "1" << "\n";
        else
            cout << "0" << "\n";
    }

}

