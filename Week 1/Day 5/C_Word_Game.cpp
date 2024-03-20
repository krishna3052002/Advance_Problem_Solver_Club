#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<string, int> freq;
        vector<string> a[3];
        for (int i = 0; i < 3; i++)
        {
            a[i].resize(n);
            for (int j = 0; j < n; j++)
            {
                string x;
                cin >> x;
                a[i][j]=x;
                freq[a[i][j]]++;
            }
        }
        int total_point[3]={0};
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(freq[a[i][j]]==1)
                {
                    total_point[i]+=3;
                }
                else if(freq[a[i][j]]==2)
                {
                    total_point[i]+=1;
                }
            }
        }
        cout<<total_point[0]<<" "<<total_point[1]<<" "<<total_point[2]<<endl;
    }
    return 0;
}