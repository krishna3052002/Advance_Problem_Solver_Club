#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        ll neg = 0, ans = 0, MIN = LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < 0)
            {
                neg++;
            }
            ans += abs(a[i]);
            MIN = min(MIN, abs(a[i]));
        }

        if (neg % 2 == 1)
            ans -= (2LL * MIN);

        cout << ans << endl;
    }
    return 0;
}
