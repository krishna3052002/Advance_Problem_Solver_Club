#include <bits/stdc++.h>
using namespace std;
bool Is_palindrome(vector<int> x, int n)
{
    int i=0,j=n-1;
    while(i<j)
    {
        if(x[i]!=x[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int i = 0, j = n - 1;
        bool ans = true;
        int a, b;
        while (i < j)
        {
            if (v[i] != v[j])
            {
                ans = false;
                a = v[i];
                b = v[j];
                break;
            }
            i++;
            j--;
        }
        if (ans == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            vector<int> v1, v2;
            for (int i = 0; i < n; i++)
            {
                if (v[i] != a)
                {
                    v1.push_back(v[i]);
                }
                if (v[i] != b)
                {
                    v2.push_back(v[i]);
                }
            }
            // cout << "Without a:";
            // for (auto it = v1.begin(); it < v1.end(); it++)
            // {
            //     cout << *it << " ";
            // }
            // cout << endl
            //      << "Without b:";
            // // cout<<"Without a:";
            // for (auto it = v2.begin(); it < v2.end(); it++)
            // {
            //     cout << *it << " ";
            // }
            if (Is_palindrome(v1, v1.size()) || Is_palindrome(v2, v2.size()))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}
