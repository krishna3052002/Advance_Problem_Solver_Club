#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, h;
        cin >> n >> m >> h;
        priority_queue<ll> pq1, pq2;
        vector<ll> a(n);
        vector<ll> b(m);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            pq1.push(a[i]);
        }
        for (ll i = 0; i < m; i++)
        {
            cin >> b[i];
            pq2.push(b[i]);
        }
        ll ans = 0;
        while (pq1.empty() == false && pq2.empty() == false)
        {
            ll prod = pq2.top() * h;
            if (prod <= pq1.top())
            {
                ans = ans + prod;
                pq2.pop();
                pq1.pop();
            }
            else
            {
                ans = ans + pq1.top();
                pq1.pop();
                pq2.pop();
            }
        }
        cout << ans << endl;
    }
    return 0;
}