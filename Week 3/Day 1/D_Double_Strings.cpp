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
        vector<string> v;
        map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            mp[s]++;
            v.push_back(s);
        }
        vector<int> ans(n, 0);
        for (int k = 0; k < n; k++)
        {
            if (v[k].size() == 1)
                continue;
            for (int i = 0; i < v[k].size() - 1; i++)
            {
                string x = "", y = "";
                for (int j = 0; j <= i; j++)
                {
                    x.push_back(v[k][j]);
                }
                for (int j = i + 1; j < v[k].size(); j++)
                {
                    y.push_back(v[k][j]);
                }
                if (x == y)
                {
                    if (mp[x] > 0)
                    {
                        ans[k] = 1;
                        break;
                    }
                }
                else if (mp[x] > 0 && mp[y] > 0)
                {
                    ans[k] = 1;
                    break;
                }
                if (ans[k] == 1)
                    break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i];
        }

        cout << endl;
    }
}
