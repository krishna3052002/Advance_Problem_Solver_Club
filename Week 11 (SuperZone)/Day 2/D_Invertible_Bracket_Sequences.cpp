#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.length();
        int balance=0;
        int valid_pairs=0;
        vector<int> balance_cnt(2*n+1,0);
        balance_cnt[n]=0;
        for(char c:s)
        {
            if(c=='(')
            {
                balance++;
            }
            else
            {
                balance--;
            }
            valid_pairs+=balance_cnt[balance+n];
            balance_cnt[balance+n]++;
        }
        cout<<valid_pairs<<endl;
    }
}  