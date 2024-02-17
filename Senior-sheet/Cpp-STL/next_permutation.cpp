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

void nextPermutaion(string &s, int times, string type)
{
    while (times--)
    {
        if (type == "next_permutation")
        {
            next_permutation(s.begin(), s.end());
        }
        else
        {
            prev_permutation(s.begin(), s.end());
        }
    }

    cout << s << endl;
}

void solve()
{
    int n, q;
    cin >> n >> q;

    string s;
    cin >> s;

    while (q--)
    {
        string str;
        cin >> str;
        int times;
        cin >> times;
        nextPermutaion(s, times, str);
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
