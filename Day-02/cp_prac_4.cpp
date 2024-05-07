// https://www.codechef.com/problems/FCTRL2

#include <iostream>
using namespace std;

int N = 100;

string *dp;

void solve()
{
    int n;
    cin >> n;
    cout << dp[n - 1] << endl;
}

int charToInt(char num)
{
    return num - '0';
}

char intToChar(int num)
{
    return '0' + num;
}

string mult(string prev_fact, int num)
{
    string ans = "";
    int carry = 0;
    int m;
    for (int i = prev_fact.length() - 1; i >= 0; i--)
    {
        m = charToInt(prev_fact[i]) * num + carry;
        ans += intToChar(m % 10);
        carry = m / 10;
    }
    while (carry)
    {
        ans += intToChar(carry % 10);
        carry /= 10;
    }

    int s = 0, e = ans.length() - 1;
    char temp;
    while (s < e)
    {
        temp = ans[s];
        ans[s] = ans[e];
        ans[e] = temp;
        s++;
        e--;
    }

    return ans;
}

void init_dp()
{
    dp[0] = "1";

    for (int i = 1; i < N; i++)
    {
        dp[i] = mult(dp[i - 1], (i + 1));
    }
}

// void print_dp()
// {
//     for (int i = 0; i < N; i++)
//     {
//         cout << i + 1 << "! = " << dp[i] << endl;
//     }
// }

int main()
{
    dp = new string[N];
    init_dp();
    // print_dp();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}