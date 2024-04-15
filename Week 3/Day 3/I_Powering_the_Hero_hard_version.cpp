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
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        
        ll ans = 0;
        priority_queue<ll> pq;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                if(pq.empty()) continue;
                ans = ans + pq.top();
                pq.pop();
            }
            else
            {
                pq.push(v[i]);
            }
        }
        cout << ans << endl;
    }
}