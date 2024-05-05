#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        map<char, vector<int>> m;
        for (int i = 0; i < s.size(); i++)
        {
            m[s[i]].push_back(i + 1);
        }
        if (s[0] > s[n - 1])
        {
            int jump = 0;
            int cst = abs(s[0] - s[n - 1]);
            vector<int> path;
            for (int i = 0; s[0] + i >= s[n - 1]; i--)
            {
                char c = s[0] + i;

                if (m.find(c) != m.end())
                {
                    for (auto v : m[c])
                    {
                        path.push_back(v);
                    }
                }
            }
            cout << cst << " " << path.size() << endl;
            for (auto x : path)
            {
                cout << x << " ";
            }
            cout << endl;
        }
        else if (s[0] < s[n - 1])
        {
            // second case
            int jump = 0;
            int cst = abs(s[0] - s[n - 1]);
            vector<int> path;
            for (int i = 0; s[0] + i <= s[n - 1]; i++)
            {
                char c = s[0] + i;

                if (m.find(c) != m.end())
                {
                    for (auto v : m[c])
                    {
                        path.push_back(v);
                    }
                }
            }
            cout << cst << " " << path.size() << endl;
            for (auto x : path)
            {
                cout << x << " ";
            }
            cout << endl;
        }
        else{
            cout<<0<<" "<<m[s[0]].size()<<endl;

            for(auto x: m[s[0]])
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}