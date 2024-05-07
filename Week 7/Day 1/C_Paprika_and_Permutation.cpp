#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        unordered_map<ll, ll> mp;
        vector<ll>a;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
            if (mp[v[i]] > 1 && v[i] <= n)
            {
                a.push_back(v[i]);
            }
            else if (v[i] > n)
            {
                a.push_back(v[i]);
            }
        }
        sort(a.begin(), a.end());
        ll aa=a.size();
        reverse(a.begin(),a.end());
        bool flag=true;
        for (ll i = 0; i < n; i++)
        {
            if(mp[i+1]==0)
            {
                ll z=a.back();
                a.pop_back();
               ll y=i+1;
               if(z%(z-y)==y)
               {
                continue;
               }
               else
               {
                flag=false;
                break;
               }
            }
        }
       if(flag==true)
       {
        cout<<aa<<endl;
       }
       else
       {
          cout<<"-1"<<endl;
       }
       
    }
    return 0;
}