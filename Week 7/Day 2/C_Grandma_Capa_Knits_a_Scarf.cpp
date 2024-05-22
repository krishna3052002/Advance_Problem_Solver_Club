#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = INT_MAX;
        for (int c = 0; c < 26; c++)
        {
            int l = 0, r = n - 1, cnt = 0;
            while (l <= r)
            {
                if (s[l] == s[r])
                {
                    l++, r--;
                }
                else if (s[l] == char('a' + c))
                {
                    cnt++, l++;
                }
                else if (s[r] == char('a' + c))
                {
                    cnt++, r--;
                }
                else
                {
                    cnt = -1;
                    break;
                }
            }
            if (cnt != -1)
                ans = min(ans, cnt);
        }
        if (ans == INT_MAX)
            ans = -1;
        cout << ans << endl;
    }
}