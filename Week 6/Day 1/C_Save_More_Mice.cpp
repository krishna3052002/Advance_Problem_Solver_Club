#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t ;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll>mp(k);
        for(ll i=0;i<k;i++)
        {
           cin>>mp[i];
        }
        sort(mp.begin(),mp.end());
        ll c=0;
        ll ans=0;
        for(ll i=k-1;i>=0 ;i--)
        {
            ll x=mp[i];
            if(x<=c)
            {
                break;
            }
            ll d=n-x;
            c+=d;
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}