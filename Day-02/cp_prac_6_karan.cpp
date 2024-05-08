// https://www.codechef.com/problems/MONOPOLY2

#include <iostream>
using namespace std;

int getMax(int a, int b)
{
    if (a >= b)
        return a;
    else
        return b;
}

void solve()
{
    int p, q, r, s, total, max;
    total = max = 0;

    cin >> p >> q >> r >> s;
    total = p + q + r + s;
    max = getMax(getMax(getMax(p, q), s), r);

    if (max > (total - max))
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