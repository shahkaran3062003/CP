// https://www.codechef.com/problems/SST

#include <iostream>
using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;
    int eqal = x * 2;
    if (eqal == y)
    {
        cout << "ANY\n";
    }
    else if (eqal > y)
    {
        cout << "FIRST\n";
    }
    else if (eqal < y)
    {
        cout << "SECOND\n";
    }
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}