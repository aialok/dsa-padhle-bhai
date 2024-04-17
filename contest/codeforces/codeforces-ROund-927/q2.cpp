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

    vi arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int nth_year = arr[0];
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] <= temp)
        {
            int i = 1;
            while (arr[i] <= temp)
            {
                arr[i] = arr[i] * (++i);
            }
        }

        temp = arr[i];
    }

    cout << temp << endl;
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
