// https://atcoder.jp/contests/agc010/tasks/agc010_a

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
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vpii;

void solve()
{
    int n;
    cin >> n;

    vi v(n);

    int count_even = 0;
    int count_odd = 0;

    for (auto &x : v)
    {
        cin >> x;

        if (x & 1)
        {
            count_odd++;
        }
        else
        {
            count_even++;
        }
    }

    if ((count_odd & 1))
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

int main()
{
    fastio;

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
