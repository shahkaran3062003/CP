// https://www.codechef.com/problems/SEVENRINGS

#include <iostream>
using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;
    // int div = (x * y) / 10000;
    // if (div >= 1 && div <= 9)
    // {
    //     cout << "YES\n";
    // }
    // else
    // {
    //     cout << "NO\n";
    // }

    if ((x * y) > 9999 && (x * y) <= 99999)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}