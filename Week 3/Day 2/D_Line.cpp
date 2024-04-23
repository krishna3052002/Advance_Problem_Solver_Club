#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        ll maximum = 0;
        ll minimum_Chng = 0;
        vector<ll> minimize;
        for (ll i = 0; i < n; i++)
        {
            ll left = i;
            ll right = n - i - 1;
            if (s[i] == 'L')
            {
                if (right > left)
                {
                    minimum_Chng++;
                    maximum = maximum + right;

                    ll x = right - left;
                    minimize.push_back(x);
                }
                else
                {
                    maximum = maximum + left;
                }
            }
            else
            {
                if (left > right)
                {
                    minimum_Chng++;
                    maximum = maximum + left;

                    ll x = left - right;
                    minimize.push_back(x);
                }
                else
                {
                    maximum = maximum + right;
                }
            }
        }
        // cout<<minimum_Chng<<" "<<maximum<<endl;
        
        vector<ll> ans(n + 1);
        for (ll i = minimum_Chng; i <= n; i++)
        {
            ans[i] = maximum;
        }
        sort(minimize.begin(), minimize.end(), greater<ll>());
        for (ll i = minimum_Chng - 1; i >= 1; i--)
        {
            maximum = maximum - minimize.back();
            minimize.pop_back();
            ans[i] = maximum;
        }
        for (ll i = 1; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}