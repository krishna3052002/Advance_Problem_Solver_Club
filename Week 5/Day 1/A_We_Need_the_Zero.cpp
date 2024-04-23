#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            // x^=a[i];
        }
        ll x = 0;
        for (ll i = 0; i < n; i++)
        {

            x ^= a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            a[i] ^= x;
        }
        ll y = 0;
        for (ll i = 0; i < n; i++)
        {
            y ^= a[i];
        }
        if (y == 0)
        {
            cout << x << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}