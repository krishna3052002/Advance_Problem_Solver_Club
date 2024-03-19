#include <bits/stdc++.h>
using namespace std;
#define ll long long  
int main()
{
    ll n;
    cin >> n;
    // vector<ll> v;
    ll mn=LLONG_MAX,sum=0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        sum+=x;
        if(x%2!=0)
        {
           mn=min(mn,x);
        }
    }
    if(sum%2!=0)
    {
        sum-=mn;
    }
    cout<<sum<<endl;
    // sort(v.begin(),v.end(),greater<ll>());
    // // for (int i = 0; i < n; i++)
    // // {
    // //     cout<<v[i]<<" ";
    // // }
    // // cout<<endl;
    // ll prefix_sum[n];
    // prefix_sum[0] = v[0];
    // for (ll i = 1; i <= n; i++)
    // {
    //     prefix_sum[i] = prefix_sum[i - 1] + v[i];
    // }
    // for (ll i = n-1; i>=0; i--)
    // {
    //     if(prefix_sum[i]%2==0)
    //     {
    //         cout<<prefix_sum[i]<<endl;
    //         return 0;
    //     }
    // }
    // cout<<"0"<<endl;
    return 0;
}