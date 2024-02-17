#include <bits/stdc++.h>
using namespace std;

int numSquares(int n)
{
    if (n == 0 || n < 0)
    {
        return 0;
    }

    vector<int> dp(n + 1, n);
    dp[0] = 0;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j * j <= i; ++j)
        {
            dp[i] = min(dp[i], dp[i - j * j] + 1);
        }
    }

    return dp[n];
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Minimum number of perfect square numbers summing up to " << n << " is: " << numSquares(n) << endl;

    return 0;
}
