#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main()
{
 ll n;
 cin>>n;
 ll sum=0;
 for(ll i=0;i<n-1;i++)
 {
    ll x;
    cin>>x;
    sum+=x;

 }
 ll total_sum=(n*(n+1) )/ 2;
//  cout<<total_sum<<endl;
//  cout<<sum<<endl;
 cout<<total_sum-sum<<endl;
 return 0;
}