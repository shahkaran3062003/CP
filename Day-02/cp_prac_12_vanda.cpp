// https://www.codechef.com/problems/EXPERT

#include <iostream>
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve()
{
    int x, y;
    cin >> x >> y;

    if ((y * 2) >= x)
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