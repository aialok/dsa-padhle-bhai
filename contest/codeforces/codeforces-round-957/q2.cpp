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
    int n, m, k;
    cin >> n >> m >> k;

    string s;
    cin >> s;

    int alive = -1;
    bool dead = false;

    if (m > n)
    {
        cout << "Yes" << endl;
        return;
    }

    int i = 0;
    int j = 0;

    while (i < n)
    {
        if (s[i] == 'L')
        {
            if (s[i + m - 1] == 'L')
            {
                alive = i + m - 1;
                i = i + m - 1;
            }
            else{
                i++;
            }
        }
        else if (s[i + m - 1] == 'L')
        {
            alive = i + m - 1;
            i = i + m - 1;
        }
        else if (s[i] == 'W' &&( s[i + 1] == 'W' || s[i]=='L' )&& k > 0)
        {
            i++;
        }
        else if (s[i] == 'W' && k == 0 && s[i] == 'C')
        {
            dead = true;
            break;
        }
    }

    if(dead){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
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
