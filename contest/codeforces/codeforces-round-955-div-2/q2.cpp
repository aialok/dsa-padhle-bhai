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
#define int long long

void solve()
{
    int n, l, r;
    cin >> n >> l >> r;

    vi arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = 0;
    int sum = 0;
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum >= l && sum <= r)
        {
            ans++;
            sum = 0;
            index = i + 1;
        }
        else if (sum > r)
        {
            while (sum >= l)
            {
                sum -= arr[index];
                index++;
                if (sum >= l && sum <= r)
                {
                    ans++;
                    sum = 0;
                    index = i + 1;
                    break;
                }
            }
        }
    }

    cout << ans << endl;
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
