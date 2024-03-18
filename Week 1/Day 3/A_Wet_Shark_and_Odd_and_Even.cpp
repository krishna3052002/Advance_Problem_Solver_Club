#include <bits/stdc++.h>
using namespace std;
#define ll long long  int
int main()
{
    int n;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end(),greater<ll>());
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    ll prefix_sum[n];
    prefix_sum[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + v[i];
    }
    for (int i = n-1; i>=0; i--)
    {
        if(prefix_sum[i]%2==0)
        {
            cout<<prefix_sum[i]<<endl;// 7 5 2 1
            return 0;
        }
    }
    cout<<"0"<<endl;
    return 0;
}