#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll lcm(ll a, ll b)
{
    // return ((a * b) / gcd(a, b));
    return ((a / __gcd(a, b)) * b);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    if (n == 1)
    {
        cout << "1" << " " << "1" << endl;
        return 0;
    }
    vector<ll> divisors;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divisors.push_back(i);
            if ((n / i) != i)
            {
                divisors.push_back(n / i);
            }
        }
    }

    sort(divisors.begin(), divisors.end());

    ll l = 0, r = divisors.size() - 1;
    ll MIN = LLONG_MAX;
    vector<ll> v(2);
    // for (auto c : divisors)
    // {
    //     cout << c << " ";
    // }
    // cout << endl;
    while (l < r)
    {
        ll x = max(divisors[l], divisors[r]);
        if (x < MIN && lcm(divisors[l], divisors[r]) == n)
        {
            v[0] = divisors[l];
            v[1] = divisors[r];
        }
        l++;
        r--;
    }
    for (auto c : v)
    {
        cout << c << " ";
    }
    cout << endl;
    return 0;
}