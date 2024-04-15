#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        // cout<<s1.back()<<" "<<s2.back()<<endl;
        int c1 = 0, c2 = 0;
        if (s1.back() != s2.back())
        {
            if (s1.back() > s2.back())
            {
                cout << "<" << endl;
            }
            else if (s1.back() < s2.back())
            {
                cout << ">" << endl;
            }
        }
        else
        {
            for (char c : s1)
            {
                if (c == 'X')
                {
                    c1++;
                }
            }
            for (char c : s2)
            {
                if (c == 'X')
                {
                    c2++;
                }
            }
            if (s1.back() == 'L')
            {
                if (c1 > c2)
                {
                    cout << ">" << endl;
                }
                else if (c1 < c2)
                {
                    cout << "<" << endl;
                }
                else
                {
                    cout << "=" << endl;
                }
            }
            else if (s1.back() == 'S')
            {
                if (c1 > c2)
                {
                    cout << "<" << endl;
                }
                else if (c1 < c2)
                {
                    cout << ">" << endl;
                }
                else
                {
                    cout << "=" << endl;
                }
            }
            else if (s1.back() == 'M')
            {

                cout << "=" << endl;
            }
        }
    }
}
