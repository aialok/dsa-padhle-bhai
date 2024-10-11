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
// #define endl '\n'
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vpii;

void solve()
{
    int n;
    cin >> n;

    if (n > 52)
    {
        int ans = n - 52;
        cout << char('a' + ans - 1) << 'z' << 'z' << endl;
    }
    else if (n > 27 && n <= 52)
    {
        cout << 'a' << char('a' + (n - 26 - 2)) << 'z' << endl;
    }
    else
    {
        cout << 'a' << 'a' << char('a' + n - 2 - 1) << endl;
    }
}

int main()
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
