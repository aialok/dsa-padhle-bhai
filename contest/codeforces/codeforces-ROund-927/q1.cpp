// Hello, This is ai.alok code!
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <climits>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
using namespace std;
#define int unsigned long long
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
    int n, m;
    cin >> n >> m;
    int product = 1;
    deque<int> q;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        product = product * x;
        q.push_back(x);
    }

    string s;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        // cout<<product<<" "<<endl;
        if (s[i] == 'L')
        {
            cout << (product) % m << " ";
            int first = q.front();
            q.pop_front();
            product = product / first;
        }
        else
        {
            cout << (product) % m << " ";
            int last = q.back();
            q.pop_back();
            product = product / last;
        }
    }

    cout << endl;
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
