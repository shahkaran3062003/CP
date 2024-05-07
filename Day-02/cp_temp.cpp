#include <iostream>
using namespace std;

int N = 14;

long long int *dp;

void init_dp()
{
    dp[0] = 1;

    for (int i = 1; i < N; i++)
    {
        dp[i] = dp[i - 1] * (i + 1);
    }
}

void print_dp()
{
    for (int i = 0; i < N; i++)
    {
        cout << i + 1 << "! = " << dp[i] << endl;
    }
}

int main()
{
    dp = new long long int[N];
    init_dp();
    print_dp();

    int n1 = 12, n2 = 5, n3 = 14;

    cout << n1 << "! = " << dp[n1 - 1] << endl;
    cout << n2 << "! = " << dp[n2 - 1] << endl;
    cout << n3 << "! = " << dp[n3 - 1] << endl;

    return 0;
}