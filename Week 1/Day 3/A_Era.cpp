#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        ll array[n];
        for(int i=0;i<n;i++)
        {
            cin>>array[i];
        }
        ll op=0;
        for(int i=0;i<n;i++)
        {
            ll x=array[i]-((i+1)+op);
            if(x>=0)
            {
                op=op+x;
            }
        }
        cout<<op<<endl;
        
    }
    return 0;
}