#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0) , cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll ans=0;
        for(int i=30;i>=0;i--)
        {
            ll cnt=0;
            for(int j=0;j<n;j++)
            {
              if(a[j]>=pow(2,i) && a[j]<pow(2,i+1))
              {
                cnt++;
              }
            }
            ans=ans+(cnt*(cnt-1))/2;
        }
        cout<<ans<<"\n";
    }
}