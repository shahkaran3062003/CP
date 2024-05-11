// https://www.codechef.com/problems/MYSERVE

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<vector<int>> vii;
typedef vector<vector<long long>> vll;
typedef vector<pair<int, int>> pi;
typedef vector<ll> vl;

#define ne !=
#define e ==
#define l <
#define le <=
#define g >
#define ge >=
#define FOR(i, a, ex, n) for (auto i = a; i ex n; i++)
#define LOOP(n) for (auto i = 0; i < n; i++)
#define FOREACH(values) for (auto i : values)
#define rep(i, val, n) for (auto i = val; i <= n; ++i)
#define rev(i, val, n) for (auto i = val; i >= n; --i)
#define SQ(i) (i) * (i)
#define yes cout << "YES\n";
#define no cout << "NO\n";

void solve()
{
    int a, b;
    cin >> a >> b;
    if ((a + b) % 4 < 2)
    {
        cout << "Alice\n";
    }
    else
    {
        cout << "Bob\n";
    }
    // if ((a + b) == 0)
    // {
    //     cout << "Alice\n";
    // }
    // else if ((a + b) % 2 == 0)
    // {
    //     if ((a + b) % 4 == 0)
    //     {
    //         cout << "Alice\n";
    //     }
    //     else
    //     {
    //         cout << "Bob\n";
    //     }
    // }
    // else
    // {
    //     if ((a + b + 1) % 4 == 0)
    //     {
    //         cout << "Bob\n";
    //     }
    //     else
    //     {
    //         cout << "Alice\n";
    //     }
    // }
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