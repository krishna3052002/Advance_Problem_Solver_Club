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
        vector<int> a[n];
        vector<int> all_nums;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            a[i].resize(k);
            for (int j = 0; j < a[i].size(); j++)
            {
                cin >> a[i][j];
                all_nums.push_back(a[i][j]);
            }
        }
        sort(all_nums.begin(), all_nums.end());
        all_nums.erase(unique(all_nums.begin(), all_nums.end()), all_nums.end());
        // for(auto c: all_nums)
        // {
        //     cout<<c<<" ";
        // }
        int ans=INT_MIN;
        for (int ex = 1; ex <= 50; ex++)
        {
            vector<int> temp;
            for (int i = 0; i < n; i++)
            {
                bool flag = false;
                for (int j = 0; j < a[i].size(); j++)
                {
                    if (a[i][j] == ex)
                    {
                        flag = true;
                        break;
                    }
                }
                if (flag == false)
                {
                    for (int j = 0; j < a[i].size(); j++)
                    {
                        temp.push_back(a[i][j]);
                    }
                }
            }
           sort(temp.begin(),temp.end());
           temp.erase(unique(temp.begin(),temp.end()),temp.end());
           if(temp!=all_nums)
           {
            ans=max(ans,(int)temp.size());
           }
        }
        cout <<ans<< endl;
    }
}