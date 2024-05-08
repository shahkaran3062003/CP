// https://www.codechef.com/problems/PIZZAC

#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (!(n & 1) || n == 1)
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