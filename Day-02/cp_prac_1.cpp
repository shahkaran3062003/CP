// https://www.codechef.com/problems/CCHOCOLATES

#include <iostream>
using namespace std;

void solve()
{
    int x, y, z;
    cin >> x >> y >> z;
    int rup = (x * 5) + (y * 10);
    cout << (rup / z) << "\n";
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