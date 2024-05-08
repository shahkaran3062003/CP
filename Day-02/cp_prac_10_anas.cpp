// https://www.codechef.com/problems/HELIUM3

#include <iostream>
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    if ((x * y) >= (a * b))
    {
        yes;
    }
    else
    {
        no;
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
