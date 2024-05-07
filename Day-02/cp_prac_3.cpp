#include <iostream>
using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;

    int diff = y - x;

    if (diff % 8 == 0)
    {
        cout << diff / 8 << endl;
    }
    else
    {
        cout << (diff / 8) + 1 << endl;
    }
    // int count = 0;
    // while (x < y)
    // {
    //     count++;
    //     x += 8;
    // }
    // cout << count << "\n";

    // log_8((y-x))   log_8(16) = 2
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