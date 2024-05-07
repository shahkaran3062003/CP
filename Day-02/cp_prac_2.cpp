// https://www.codechef.com/problems/EXAMCHEF

#include <iostream>
using namespace std;

void solve()
{
    int x, y, z;
    cin >> x >> y >> z;

    if ((x * y) / 2 < z)
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