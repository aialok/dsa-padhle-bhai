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
    int n, x, y;
    cin >> n >> x >> y;

    vi arr(n);
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // mp[arr[i]]++;
    }
    int count =0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
                if((arr[i]+arr[j])%x==0 && abs(arr[i]-arr[j])%y==0){
                    count ++;
                }
        }
        
    }

    cout<<count<<endl;
    
    


    // int count = 0;

    // for (auto t : mp)
    // {
    //     if (mp.count(abs(t.first - x)) && mp.count(t.first + y))
    //     {
    //         count++;
    //     }
    // }

    // cout << count << endl;
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
