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
#include <deque>
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
    int n, m;
    cin >> n >> m;
    deque<int> dq;
    int arr[n];
    // int product = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        dq.push_back(arr[i]);
    }
    vector<int> v;
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'R')
        {
            int temp = dq.back();
            dq.pop_back();
            v.push_back(temp);
        }
        else
        {
            int temp = dq.front();
            dq.pop_front();
            v.push_back(temp);
        }
    }

    reverse(v.begin(), v.end());

    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }

    vector<int>ans(n);

    int product = 1;
    for (int i = 0; i < v.size(); i++)
    {
        product = (product * v[i]) % m;
        ans[i] = product;
    }

    reverse(ans.begin(), ans.end());

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
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
