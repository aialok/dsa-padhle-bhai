// Hello, This is ai.alok code!
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <climits>
#include <queue>
#include <stack>
#include <map>
#include <set>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define pb push_back
#define mp make_pair
#define INF LLONG_MAX
#define MOD 1000000007
#define endl '\n'
#define int long long
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vpii;

void solve()
{
    int x, y;
    cin >> x >> y;

    int diag = max(x, y);

    int elem_diag = diag * diag - diag + 1;

    if (diag % 2 == 1)
    {
        if (x > y)
        {
            cout << elem_diag - abs(x - y) << endl;
        }
        else
        {
            cout << elem_diag + abs(x - y) << endl;
        }
    }
    else
    {
        if (x > y)
        {
            cout << elem_diag + abs(x - y) << endl;
        }
        else
        {
            cout << elem_diag - abs(x - y) << endl;
        }
    }
}

signed main()
{
    fastio;

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
