#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int count = 0;
    int size = 0;
    for (char c : a)
    {
        size++;
    }
    for (int i = 0; i < size; i++)
    {
        if (a[i] != b[i])
        {
            count++;
        }
    }
    cout << count << endl;
}