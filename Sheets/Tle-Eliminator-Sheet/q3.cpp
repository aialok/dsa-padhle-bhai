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

    int x = 0;
    int y = 0;
    bool found = 1;
    // if(arr[0]!=arr[n-1]){
    //     cout<<n<<endl;
    //     return;
    // }
    for (int i = 0; i < n; i++)
    {

        if (arr[i] == arr[i + 1] && found)
        {
            x++;
        }
        else
        {
            found = 0;
            if (arr[y] == arr[i])
            {
                continue;
            }
            if (arr[x] == arr[i])
            {
                continue;
            }
            else
            {

                y = i;
            }
        }
    }
    // cout << y << " " << x << endl;
    if (x == n - 1)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << y - x << endl;
    }
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
