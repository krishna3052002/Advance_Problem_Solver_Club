#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, m;
    cin >> n >> m;
    ll a[n], b[m];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    ll ans = 0;
    ll l = 0, r = 0;
    while (r < m)
    {
        while (l < n && a[l] < b[r] )
        {
            ans += 1;
            l++;
        }

        r++;

        cout << ans << " ";
    }
}
