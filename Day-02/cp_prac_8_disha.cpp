// https://www.codechef.com/problems/OFFICE

#include <iostream>
using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;
    cout << (x * 4) + y << "\n";
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