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
constexpr int N = 2e5 + 7;

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
int sum[N + 1];

constexpr int digitSum(int n)
{
    int sum = 0;
    while (n)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

void solve()
{
    int n;
    cin >> n;

    cout << sum[n] << endl;
}

signed main()
{
    fastio;

    for (int i = 1; i <= N; i++)
        sum[i] = sum[i - 1] + digitSum(i);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
