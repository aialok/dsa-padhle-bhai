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
    int n;
    cin >> n;

    vi arr(n);
    int sum = 0;
    int sum_arr = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum_arr = sum_arr + arr[i];
    }

    int cap = sum_arr / n;

    bool found = 0;
    if (arr[0] < cap)
    {
        cout << "NO" << endl;
        return;
    }

    // cout<<cap<<endl;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == cap)
        {
            continue;
        }

        if (arr[i] - cap > 0)
        {
            sum = sum + arr[i] - cap;
        }
        else
        {
            if (sum >= (cap - arr[i]))
            {

                sum = sum - (cap - arr[i]);
            }
            else if (sum != 0 && sum < cap - arr[i])
            {

                break;
            }
        }

        // cout<<sum<<endl;
    }



    if ((sum == 0 && i == n) || found)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
