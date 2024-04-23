#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        for(char c: s)
        {
            cout<<c<<" = "<<(c-'a')+1<<endl;;
        }
        cout<<endl;
    }

}