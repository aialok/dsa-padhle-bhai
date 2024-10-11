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
    int n, q;
    cin >> n >> q;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    while (q--)
    {
        string str;
        cin >> str;
        int x;
        cin >> x;

        if (str == "lower_bound")
        {

            if ((lower_bound(arr.begin(), arr.end(), x)) != arr.end())
            {
                cout << arr[(lower_bound(arr.begin(), arr.end(), x) - arr.begin())] << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else if (str == "upper_bound")
        {

            if ((upper_bound(arr.begin(), arr.end(), x)) != arr.end())
            {
                cout << arr[(upper_bound(arr.begin(), arr.end(), x) - arr.begin())] << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            // cout << binary_search(arr.begin(), arr.end(), x) << endl;
            if (binary_search(arr.begin(), arr.end(), x))
            {
                cout << "found" << endl;
            }
            else
            {
                cout << "not found" << endl;
            }
        }
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
