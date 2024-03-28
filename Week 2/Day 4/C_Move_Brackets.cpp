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
        cin>>s;
        stack<char> st1, st2;
        for (char c : s)
        {
            if (c == ')' && st1.empty() == false && st1.top() == '(')
            {
                st1.pop();
            }
            else if (c == ')')
            {
                st2.push(c);
            }
            else
            {
                st1.push(c);
            }
        }
        cout<<st2.size()<<endl;
    }
}