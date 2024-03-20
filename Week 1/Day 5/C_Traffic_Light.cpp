#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll len;
        char cur;

        cin >> len >> cur;
        queue<ll> cur_index, green_index;
        char s1[len];
        int count = 0;
        ll green_firstIndex;
        for (ll i = 0; i < len; i++)
        {
            cin >> s1[i];
            if (s1[i] == cur)
            {
                cur_index.push(i);
            }
            if (s1[i] == 'g')
            {
                if (count == 0)
                {
                    green_firstIndex = i;
                    green_index.push(i);
                    count++;
                }
                else
                {
                    green_index.push(i);
                }
            }
        }
        green_index.push(green_firstIndex + len);
        // while (cur_index.empty() == false)
        // {
        //     cout << cur_index.front() << " ";
        //     cur_index.pop();
        // }
        // cout << endl;
        // while (green_index.empty() == false)
        // {
        //     cout << green_index.front() << " ";
        //     green_index.pop();
        // }
        ll ans = LLONG_MIN;
        if (cur == 'g')
        {
            cout << "0" << endl;
        }
        else
        {
            while (cur_index.empty() == false && green_index.empty() == false)
            {
                if (cur_index.front() < green_index.front())
                {
                    ll x;
                    x = green_index.front() - cur_index.front();
                    ans = max(ans, x);
                    cur_index.pop();
                }
                else
                {
                    green_index.pop();
                }
            }
            cout << ans << endl;
        }
    }
}