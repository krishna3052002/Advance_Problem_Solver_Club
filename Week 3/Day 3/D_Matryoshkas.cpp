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
        vector<int> v;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int cur = v[i];
            if(mp[v[i]] != 0)
            {
                ans++;
                while (mp[cur] > 0)
                {
                    mp[cur]--;
                    cur++;
                }
            }
        }
        cout << ans << endl;
    }
}