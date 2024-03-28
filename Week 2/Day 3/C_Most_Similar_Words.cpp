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
        int w;
        cin >> w;
        vector<string> s;
        for (int i = 0; i < n; i++)
        {
            string x;
            cin >> x;
            s.push_back(x);
        }

        int ans = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            for (int k = i+1; k < n; k++)
            {
                int x = 0;
                string st1 = s[i];
                string st2 = s[k];
                // cout << st1 << " " << st2 << endl;
                for (int j = 0; j < w; j++)
                {
                    x = x + (abs(st1[j] - st2[j]));
                }
                 ans = min(ans, x);
            }
           
        }

        cout << ans << endl;
    }
    return 0;
}