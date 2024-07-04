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
        v.push_back(n);
        ll i = 0;
        while ((1 << i) < n)
        {
            if (n & (1 << i))
            {
                n = n ^ (1 << i);
                v.push_back(n);
            }
            i++;
        }

        while (n > 1)
        {
            v.push_back(n / 2);
            n = n / 2;
        }
        cout << v.size() << endl;
        for (auto c : v)
        {
            cout << c << " ";
        }
        cout << endl;
    }
}