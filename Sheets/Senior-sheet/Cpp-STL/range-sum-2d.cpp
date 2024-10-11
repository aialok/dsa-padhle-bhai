#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int n, m, q;
    cin >> n >> m >> q;

    vector<vector<int>> v(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int x;
            cin >> x;
            v[i][j] = x;
        }
    }

    vector<vector<int>> pref(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            pref[i][j] = pref[i - 1][j] + pref[i][j - 1] + v[i][j] - pref[i - 1][j - 1];
        }
    }

    while (q--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        cout << pref[x2][y2] - pref[x1 - 1][y2] - pref[x2][y1 - 1] + pref[x1 - 1][y1 - 1] << endl;
    }

    return 0;
}