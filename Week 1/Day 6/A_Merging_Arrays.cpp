#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, m;
    cin >> n >> m;
    ll a1[n], a2[m];
    for (ll i = 0; i < n; i++)
    {
        cin >> a1[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> a2[i];
    }
    ll l = 0, r = 0;
    vector<int> ans;
    while (l < n || r < m)
    {
        if (l >= n)
        {
            ans.push_back(a2[r]);
            r++;
        }
        else if (r >= m)
        {
            ans.push_back(a1[l]);
            l++;
        }
        else
        {
            if (a1[l] < a2[r])
            {
                ans.push_back(a1[l]);
                l++;
            }
            else if (a2[r] < a1[l])
            {
                ans.push_back(a2[r]);
                r++;
            }
            else
            {
                ans.push_back(a1[l]);
                ans.push_back(a2[r]);
                l++;
                r++;
            }
        }
    }
    for (auto it = ans.begin(); it < ans.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
