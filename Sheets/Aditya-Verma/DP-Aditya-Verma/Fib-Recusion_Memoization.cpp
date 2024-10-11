#include <iostream>
#include <vector>
using namespace std;

int fibonacci(int n, vector<int> &dp)
{
    if (n <= 1)
    {
        return 1;
    }

    if (dp[n] != -1)
    {
        return dp[n];
    }

    return dp[n] = fibonacci(n - 1, dp) + fibonacci(n - 2, dp);
}

int main()
{
    int n = 4;
    vector<int> dp(n + 1, -1);
    int ans = fibonacci(n, dp);

    cout << ans << endl;

    return 0;
}