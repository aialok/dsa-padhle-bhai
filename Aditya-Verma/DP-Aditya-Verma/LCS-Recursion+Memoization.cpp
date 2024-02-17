#include <iostream>
#include <vector>
using namespace std;

int LCS(string x, string y, int n, int m, vector<vector<int>> &dp)
{
    if (n == 0 || m == 0)
    {
        return 0;
    }

    if (dp[n][m] != -1)
    {
        return dp[n][m];
    }

    if (x[n - 1] == y[m - 1])
    {
        return dp[n][m] = 1 + LCS(x, y, n - 1, m - 1, dp);
    }
    else
    {
        return dp[n][m] = max(LCS(x, y, n - 1, m, dp), LCS(x, y, n, m - 1, dp));
    }
}

int main()
{
    string x, y;
    cin >> x >> y;
    cout << "String x: " << x << endl;
    cout << "String y: " << y << endl;

    vector<vector<int>> dp(x.length() + 1, vector<int>(y.length() + 1, -1));

    int lcs = LCS(x, y, x.length(), y.length(), dp);

    cout << "lcs: " << lcs << endl;

    return 0;
}

