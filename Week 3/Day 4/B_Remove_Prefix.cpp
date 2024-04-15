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
        vector<ll> v(n);
        map<ll, ll> mp;
        // ll count=0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            
        }
        ll ans = 0;
        for (ll i = n - 1; i >= 0; i--)
        {
            mp[v[i]]++;
            if (mp[v[i]] > 1)
            {
                ans = i + 1;
                break;
            }
        }

        cout << ans << endl;
    }
}