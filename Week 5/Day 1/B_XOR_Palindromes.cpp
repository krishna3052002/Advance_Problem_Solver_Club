#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans = "";
        int goodPairs = 0;
        int jhamela = 0;
        int l = 0, r = n - 1;
        while(l<r)
        {
            if(s[l]==s[r])
            {
                 goodPairs+=2;
            }
            else
            {
                jhamela++;
            }
            l++;
            r--;
        }

        for(int i=0;i<=n;i++)
        {
            int total=i;
            total-=jhamela;
            if(total<0)
            {
                ans.push_back('0');
                continue;
            }

            total=max((total%2),total-goodPairs);
            total=max(0,(total-(n%2)));
            
            if(total==0)
            {
                ans.push_back('1');
            }
            else{
                ans.push_back('0');
            }

        }
        cout<<ans<<endl;
    }
}