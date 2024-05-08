#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int *arr;
    arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[n];
    }

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " " << arr[i] << "\n";
    }

    return 0;
}