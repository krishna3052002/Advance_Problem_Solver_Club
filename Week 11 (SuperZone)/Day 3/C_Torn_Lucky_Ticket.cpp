#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin >> n;
    vector<string> v;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    ll ans = 0;
    // for(auto c:odd)
    // {
    //     cout<<c.first<<"-->"<<c.second<<endl;
    // }
   // cout<<odd.size()<<endl;
    for (ll i = 0; i < v.size(); i++)
    {
        for (ll j = 0; j < v.size(); j++)
        {
            string k = v[i] + v[j];
            //cout<<"Size of k:"<<k.size()<<endl;
            ll sz = k.size() / 2;
            //cout<<"Half size of k:"<<sz<<endl;
            ll first_sum = 0, second_sum = 0;
            for (ll l = 0; l < sz; l++)
            {
                first_sum += k[l];
            }
            for (ll l = sz; l < k.size(); l++)
            {
                second_sum += k[l];
            }
            if (first_sum == second_sum)
            {
                ans++;
                //cout<<v[i]<<" "<<v[j]<<endl;
            }
        }
    }

    // cout<<endl;
    // for(auto c:even)
    // {
    //     cout<<c.first<<"-->"<<c.second<<endl;
    // }
    //cout<<even.size()<<endl;
    // for (ll i = 0; i < even.size(); i++)
    // {
    //     for (ll j = 0; j < even.size(); j++)
    //     {
    //         string k = even[i].first + even[j].first;
    //         ll sz = k.size() / 2;
    //         ll first_sum = 0, second_sum = 0;
    //         for (ll l = 0; l < sz; l++)
    //         {
    //             first_sum += k[l];
    //         }
    //         for (ll l = sz; l < k.size(); l++)
    //         {
    //             second_sum += k[l];
    //         }
    //         if (first_sum == second_sum)
    //         {
    //             ans++;
    //             cout<<odd[i].first<<" "<<odd[j].first<<endl;
    //         }
    //     }
    // }

    cout <<ans<<endl;
}