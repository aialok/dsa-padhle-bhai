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
#define int unsigned long long

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    int arr[3] = {a, b, c};

    sort(arr, arr + 3);

    long long max_product = 0;

    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j <= 5 - i; j++)
        {
            int k = 5 - i - j;
            long long product = (long long)(arr[0] + i) * (arr[1] + j) * (arr[2] + k);
            max_product = max(max_product, product);
        }
    }

    cout << max_product << endl;
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
