#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int k,temp;
        vector<int> v[n];
        for(int i = 0; i < n;i++)
        {
            cin >> k;
            while(k--)
            {
                cin >> temp;
                v[i].push_back(temp);
            }
        }
        int king[n+1],dau[n+1];
        for(int i = 1; i <= n;i++)
        {
            king[i] = 0;
            dau[i] = 0;
        }
        for(int i = 0; i < n;i++)
        {
            for(int j = 0; j < v[i].size();j++)
            {
                int temp = v[i][j];
                if(king[temp] == 0)
                {
                    king[temp] = 1;
                    dau[i+1] = 1;
                    break;
                }
            }
        }
        int index,index1;
        int flag = 0;
        for(int i = 1; i <= n;i++)
        {
            if(dau[i] == 0)
            {
                for(int j = 1; j <= n;j++)
                {
                    if(king[j] == 0)
                    {
                        index = i;
                        index1 = j;
                        flag = 1;
                        break;
                    }
                }
            }
            if(flag == 1)
                break;
        }
        if(flag == 0)
            cout << "OPTIMAL" << "\n";
        else
        {
            cout << "IMPROVE" << "\n";
            cout << index << " " << index1 << "\n";
        }
    }
}
