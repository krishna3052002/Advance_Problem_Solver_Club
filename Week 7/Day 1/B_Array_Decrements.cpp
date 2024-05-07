#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n), b(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        ll diff = -1, zero = -1;
        bool imp = false;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                imp = true;
                break;
            }
            if (b[i] != 0)
            {
                if (diff == -1)
                {
                    diff = a[i] - b[i];
                }
                else
                {
                    if (a[i] - b[i] != diff)
                    {
                        imp = true;
                        break;
                    }
                }
            }
            else
            {
                zero = max(zero, a[i] - b[i]);
            }
        }
        if (imp==true)
        {
            cout << "NO" << endl;
            continue;
        }
        if (diff == -1 || zero <= diff)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}