#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    ll n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll l = 1;
    ll r = 2000000000;
    ll ans = v[0];
    while (l <= r)
    {
      ll mid = (l + r) / 2;
      ll h = 0;
      for (int i = 0; i < n; i++)
      {
        if (mid > v[i])
        {
          h += (mid - v[i]);
        }
      }
      if (h <= k)
      {
        ans = mid, l = mid + 1;
      }
      else
      {
        r = mid - 1;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}