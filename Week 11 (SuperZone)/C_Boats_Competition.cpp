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
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        ll  ans=INT_MIN;
        for (ll sum = 1; sum <= 100; sum++)
        {
            ll cnt = 0;
            ll l = 0, r = n - 1;
            while (l < r)
            {
                if (v[l] + v[r] > sum)
                    r--;
                else if (v[l] + v[r] < sum)
                    l++;
                else
                {
                    l++;
                    r--;
                    cnt++;
                }
            }
           ans=max(ans,cnt);
        }
        cout<<ans<<endl;
    }
}