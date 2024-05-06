#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll cnt = 0;
        stack<char>st;
        for(auto c:s)
        {
            if(st.empty())
            {
                st.push(c);
            }
            else if(st.top()!=c)
            {
                cnt++;
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
        
        cout << cnt << endl;
        if (cnt % 2 == 0)
        {
            cout << "Ramos" << endl;
        }
        else
        {
            cout << "Zlatan" << endl;
        }
    }
    return 0;
}