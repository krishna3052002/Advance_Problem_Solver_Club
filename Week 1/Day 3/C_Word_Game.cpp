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
        cin.ignore();
        string s1, s2, s3;
        getline(cin, s1);
        // cin.ignore();
        getline(cin, s2);
        // cin.ignore();
        getline(cin, s3);
        // cin.ignore();
        // cout << s1 << "\n"
        //      << s2 << "\n"
        //      << s3 << "\n";

        vector<string> v;

        stringstream ss1(s1);
        string word1;
        int num1 = 0, num2 = 0, num3 = 0;
        while (ss1 >> word1)
        {
            int count = 0;
            stringstream ss2(s2);
            string word2;
            while (ss2 >> word2)
            {
                if (word1 == word2)
                {
                    count++;
                }
            }
            stringstream ss3(s3);
            string word3;
            while (ss3 >> word3)
            {
                if (word3 == word1)
                {
                    count++;
                }
            }
            if (count == 0)
            {
                num1 += 3;
            }
            else if (count == 1)
            {
                num1 += 1;
            }
        }
        stringstream ss2(s2);
        string word2;
        while (ss2 >> word2)
        {
            int count = 0;
            stringstream ss1(s1);
            string word1;
            while (ss1 >> word1)
            {
                if (word1 == word2)
                {
                    count++;
                }
            }
            stringstream ss3(s3);
            string word3;
            while (ss3 >> word3)
            {
                if (word3 == word2)
                {
                    count++;
                }
            }
            if (count == 0)
            {
                num2 += 3;
            }
            else if (count == 1)
            {
                num2 += 1;
            }
        }
        stringstream ss3(s3);
        string word3;
        while (ss3 >> word3)
        {
            int count = 0;
            stringstream ss1(s1);
            string word1;
            while (ss1 >> word1)
            {
                if (word1 == word3)
                {
                    count++;
                }
            }
            stringstream ss2(s2);
            string word2;
            while (ss2 >> word2)
            {
                if (word3 == word2)
                {
                    count++;
                }
            }
            if (count == 0)
            {
                num3 += 3;
            }
            else if (count == 1)
            {
                num3 += 1;
            }
        }

        cout << num1 << " " << num2 << " " << num3;
        cout << endl;
    }
}