#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        // ll Max = INT_MIN, Min = INT_MAX;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll ans=v[n-1]-v[0];
        if(n==1)
        {
            cout<<"0"<<endl;
            continue;
        }
        for(int i=1;i<n;i++)
        {
            ans=max(ans,v[i]-v[0]);
        }
        for(int i=1;i<=n-2;i++)
        {
            ans=max(ans,v[n-1]-v[i]);
        }
        for(int i=1;i<n;i++)
        {
            ans=max(ans,v[i-1]-v[i]);
        }
        cout<<ans<<endl;
        
    }
}
// 2 1 8 3
// 1 8 3 2
// 8 3 2 1
// 3 2 1 8
// 2 1 8 3

