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
        int a[n][n - 1];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> a[i][j];
                if (j == 0)
                {
                    mp[a[i][j]]++;
                }
            }
        }
        int m = INT_MIN;
        int max_val = -1;
        for (auto x : mp)
        {
            m = max(m, x.second);
            if (m == x.second)
            {
                max_val = x.first;
            }
        }
        // cout << max_val << endl;
        vector<int> ans;
        ans.push_back(max_val);
        for (int i = 0; i < n; i++)
        {
            if (a[i][0] != max_val)
            {
                for (int j = 0; j < n - 1; j++)
                {
                    ans.push_back(a[i][j]);
                }
                break;
            }
        }
        for (auto c : ans)
        {
            cout << c << " ";
        }
        cout << endl;
    }
}