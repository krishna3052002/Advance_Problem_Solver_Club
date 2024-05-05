#include <iostream>
using namespace std;

#define ll long long
//"

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        ll a, b, n, s;
        cin >> a >> b >> n >> s;

        ll r = s % n;

        if (r <= b and a * n + b >= s)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}