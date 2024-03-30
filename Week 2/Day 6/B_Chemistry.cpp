#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, long long int> mp;
        for (char c : s)
        {
            mp[c]++;
        }
        vector<long long int> v;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            v.push_back(it->second);
        }

        sort(v.begin(), v.end());
        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout << v[i] << " ";
        // }
        // cout << endl;
        long long int count = 0;
        for (long long int i = 0; i < v.size(); i++)
        {
            if (v[i] % 2 != 0)
            {
                count++;
            }
        }
        if (count - 1 < 0)
            count = 0;
        else
        {
            count = count - 1;
        }
        if (k >= count && k <= n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}