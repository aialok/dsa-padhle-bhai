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
    string s;
    cin >> s;
    int arr[2]{0};

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
        {
            arr[0] += 1;
        }
        else
        {
            arr[1] += 1;
        }
        /* code */
    }

    if(arr[0]>arr[1]){
        cout<<'A'<<endl;
    }
    else{
        cout<<'B'<<endl;
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
