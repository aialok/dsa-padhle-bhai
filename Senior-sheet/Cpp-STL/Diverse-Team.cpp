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
    int n, k;
    cin >> n >> k;

    map<int, int> ans;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        // cout << ans.count(x) << endl;
        if (ans.count(x) == 1)
        {
            continue;
        }
        ans[x] = i;
    }

    if (ans.size() < k)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;

    map<int, int> mp;
    for (auto x : ans)
    {
        mp[x.second]++;
    }
    int i=0;
    for (auto x : mp)
    {   if(i==k){
        break;
    }
        i++;
        cout << x.first + 1 << " ";
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
