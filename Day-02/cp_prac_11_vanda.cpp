// https://www.codechef.com/problems/AMR15A

#include <iostream>
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve()
{
    int n;
    cin >> n;
    int temp, count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (!(temp & 1))
        {
            count++;
        }
    }
    if (count > n / 2)
    {
        cout << "READY FOR BATTLE\n";
    }
    else
    {
        cout << "NOT READY\n";
    }
}

int main()
{
    // int t = 1;
    // // cin >> t;
    // while (t--)
    // {
    solve();
    // }

    return 0;
}