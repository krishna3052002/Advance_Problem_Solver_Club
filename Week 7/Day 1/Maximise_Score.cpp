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
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll ans = 1e18 + 5;
        for (ll i = 0; i < n; i++)
        {

            if (i == 0)
            {
                ll x = abs(v[i] - v[i + 1]);
                ans = min(ans, x);
            }
            else if (i == n - 1)
            {
                ll x = abs(v[i] - v[i - 1]);
                ans = min(ans, x);
            }
            else
            {
                ll l=abs(v[i]-v[i-1]);
                ll r=abs(v[i]-v[i+1]);
                ll x=max(l,r);
                ans=min(ans,x);
                
            }
        }
        cout << ans << endl;
    }
}