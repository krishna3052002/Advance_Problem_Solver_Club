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
        vector<ll> v(n, 0);
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v[i] -= x;
        }
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v[i] += x;
        }
        sort(v.begin(), v.end(), greater<ll>());
        ll l = 0, r = n - 1;
        ll ans = 0;
        while (l < r)
        {
            if (v[l] > -1 && v[r] > -1)
            {
                ans++;
                l++;
                r--;
            }
            else if (v[l] < 0 && v[r] < 0)
            {
                break;
            }
            else if (v[l] > -1)
            {
                if (v[l] >= abs(v[r]))
                {
                    ans++;
                    r--;
                    l++;
                }
                else
                {
                    r--;
                }
            }
        }
        cout << ans << endl;
    }
}