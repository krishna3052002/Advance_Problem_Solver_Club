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
        string s1, s2;
        cin >> s1 >> s2;
        bool track_s1 = false, track_s2 = false;
        vector<int> s1_index, s2_index;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == 'R')
            {
                track_s1 = true;
                s1_index.push_back(i);
            }
            if (s2[i] == 'R')
            {
                track_s2 = true;
                s2_index.push_back(i);
            }
        }
        bool flag = true;
        // cout << s1_index.size() << " " << s2_index.size() << endl;
        if (s1_index.size() == s2_index.size())
        {
            for (int i = 0; i < s1_index.size(); i++)
            {
                if (s1_index[i] != s2_index[i])
                {
                    flag = false;
                }
            }
            if ((track_s1 == false && track_s2 == false) || flag == true)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}