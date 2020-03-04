#include<iostream>
using namespace std;
int main()
{
    int t,n,m;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        int score[n];
        for(int i =0 ; i < n;i++)
        {
            cin >> score[i];
        }
        long long int sum = 0;
        for(int i = 1;i < n;i++)
        {
            sum += score[i];
        }
        if(sum >= (m-score[0]))
            cout << m << endl;
        else
            cout << score[0] + sum << endl;
    }
}
