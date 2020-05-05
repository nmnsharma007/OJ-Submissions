#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,s;
    cin >> m >> s;
    if(s==0 && m!=1)
        cout << "-1 -1";
    else if(m==1 && s == 0)
        cout << "0 0";
    else 
    {
        int min[m],max[m];
        for(int i=0;i<m;i++)
        {
            min[i] = 0;
            max[i] = 0;
        }
        int k=9;
        int i=0;
        int temp = s;
        while(temp >=0 && k>0 && i<m)
        {
            if(temp-k>=0)
            {
                temp = temp-k;
                max[i] = k;
                i++;
            }
            else
                k--;
        }
        if(temp)
            cout << "-1 -1";
        else
        {
            if(s > 9*(m-1))
            {
                temp = s;
                min[0] = 0;
            }
            else
            {
                temp = s-1;
                min[0] = 1;
            }
            i = m-1;
            k=9;
            while(temp >=0 && k > 0 && i >=0)
            {
                if(temp-k>=0)
                {
                    temp = temp -k;
                    min[i] = k;
                    i--;
                }
                else
                    k--;
            }
            for(int i=0;i<m;i++)
                cout << min[i];
                cout << " ";
            for(int i=0;i<m;i++)
                cout << max[i];
        }
        
    }
}