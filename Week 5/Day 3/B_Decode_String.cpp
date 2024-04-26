#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x = s[i];
            v.push_back(x - 48);
        }
        // for(auto c:v)
        // {
        //     cout<<c;
        // }
        string ans = "";
        int i=0;
        while(i < n - 2)
        {
            if (v[i + 2] == 0 && (v[i + 3] != 0|| i+3>=n))
            {

                int x = (v[i] * 10) + v[i + 1];
                // cout << x << endl;
                char c = x + 96;
                ans.push_back(c);
                i = i + 3;
                // cout<<"i="<<i<<endl;
            }
            else
            {
                // cout<<"i{}"<<i<<endl;
                char c = v[i] + 96;
                ans.push_back(c);
                i++;
            }
        }
        // cout<<"1st i:"<<i<<endl;
        if (i < n)
        {
            while (i != n)
            {
                // cout<<"i:"<<i<<endl;
                char c = v[i] + 96;
                ans.push_back(c);
                i++;
            }
        }
        cout << ans << endl;
    }
}