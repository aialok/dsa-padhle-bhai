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
    int n;
    cin >> n;

    int arr[n][n];
    int temp = 0;
    int count = 0;
    bool sqr = 0;
    bool trg = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                // cout<<s[i]<<endl;
                count++;
            }
        }

        // cout<<count<<endl;

        if (temp == count && temp != 0 && sqr == 0 && trg == 0)
        {
            sqr = 1;
            // cout<<"h"<<endl;
        }
        else if ((temp == count - 2 || count == temp - 2) && temp != 0 && trg == 0 && sqr == 0)
        {
            trg = 1;
            // cout<<"Hello"<<endl;
        }

        temp = count;
        count = 0;
    }

    if (trg)
    {
        cout << "TRIANGLE" << endl;
    }
    else
    {
        cout << "SQUARE" << endl;
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
