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

bool comparePairs(const pair<string, vector<int>> &a, const pair<string, vector<int>> &b)
{

    if (a.second[0] != b.second[0])
    {
        return a.second[0] > b.second[0];
    }

    return a.first < b.first;
}

void solve()
{

    int n;
    cin >> n;

    vector<pair<string, vector<int>>> student(n);

    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int sum = a + b + c + d;

        student[i] = make_pair(name, vector<int>{sum, a, b, c, d});
    }

    sort(student.begin(), student.end(), comparePairs);

    for (auto x : student)
    {
        cout << x.first << " ";

        for (auto x : x.second)
        {
            cout << x << " ";
        }

        cout << endl;
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
