#include <iostream>

#include <vector>

using namespace std;
#define int long long
int m = 1000000007;

int power(int x, int y)
{
    if (y == 0)
        return 1;
    int p = power(x, y / 2) % m;
    p = (p * p) % m;

    return (y % 2 == 0) ? p : (x * p) % m;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;

        int l = n / 2;

        vector<int> v;

        if (n % 2 == 1)
        {
            v.push_back(1);
            for (int i = 1; i <= n / 2; i++)
            {
                if ((6 * i - 1) % 5 == 0)
                {
                    v.push_back(6 * i + 1);
                    v.push_back(6 * i + 1);
                }
                else
                {
                    v.push_back(6 * i - 1);
                    v.push_back(6 * i - 1);
                }
            }
        }
        else
        {
            v.push_back(2);
            v.push_back(2);
            for (int i = 1; i <= n / 2 - 1; i++)
            {
                if ((6 * i - 1) % 5 == 0)
                {
                    v.push_back(6 * i + 1);
                    v.push_back(6 * i + 1);
                }
                else
                {
                    v.push_back(6 * i - 1);
                    v.push_back(6 * i - 1);
                }
            }
        }

        for (auto x : v)
        {
            cout << x << " ";
        }

        cout << endl;
    }

    return 0;
}