#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ll n,k;
    cin>>n>>k;
    ll a[n];
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]!=k)
        {
           v.push_back(a[i]); 
        }
    }
    for(auto it=v.begin();it<v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}