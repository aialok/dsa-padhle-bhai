#include <iostream>
#include <vector>
using namespace std;

int LCS(string x, string y, int n, int m)
{
    if (n == 0 || m == 0)
    {
        return 0;
    }

    if (x[n - 1] == y[m - 1])
    {
        return 1 + LCS(x, y, n - 1, m - 1);
    }
    else
    {
        return max(LCS(x, y, n - 1, m), LCS(x, y, n, m - 1));
    }
}

int main()
{

    string x, y;
    cin >> x >> y;

    cout << "String x: " << x << endl;
    cout << "String y: " << y << endl;

    int lcs = LCS(x, y, x.length(), y.length());

    cout << "lcs: " << lcs << endl;

    return 0;
}