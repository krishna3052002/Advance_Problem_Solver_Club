#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans=1;
        while(ans<=n)
        {
            ans*=2;
        }
        ans/=2;
        ans--;
        cout<<ans<<endl;
    }
return 0;
}
