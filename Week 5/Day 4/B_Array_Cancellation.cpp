#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll pos = 0, neg = 0;
        for (ll i = 1; i <= n; i++)
        {
            ll x;
            cin >> x;
            if (x >= 0)
                pos += x;
            else
            {
                if (pos + x >= 0)
                    pos += x;
                else
                {
                    x += pos;
                    pos = 0;
                    neg += x;
                }
            }
        }

        cout << -neg << endl;
    }

    return 0;
}