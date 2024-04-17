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

    if (n < 10)
    {
        cout << (n * (n + 1)) / 2 << endl;
    }
    else
    {
        // int sum = 0;
        int temp = 1;
        int it = 1;
        int sum = 45;
        for (int i = 10; i <= n; i++)
        {

            if (((i) % 10 == 0 && ((i) / 10) % 10 == 0))
            {   
                
               
                it = temp;
                sum = sum + it;
                cout<<"temp "<<temp<<endl;
                cout<<"iii "<<i<<endl;
                continue;
            }

            // cout<<"temp"<< temp<<endl;
            cout<<i<<endl;
            cout<<"it "<<it<<endl;

            sum = sum + it;

            if ((i) % 10 == 9)
            {
                // cout << "i " << i << endl;
                it = temp + 1;
                temp++;
            }
            else
            {
                it++;
            }
            // cout << it << endl;
        }

        cout << sum << endl;
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
