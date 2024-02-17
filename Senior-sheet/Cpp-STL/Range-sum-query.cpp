#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    // Use vector instead of array for dynamic memory allocation
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    // Calculate prefix sum
    vector<long long> prefix_sum(n + 1, 0);
    for (int i = 1; i <= n; ++i)
    {
        prefix_sum[i] = prefix_sum[i - 1] + arr[i - 1];
    }

    // Process queries
    while (q--)
    {
        int x, y;
        cin >> x >> y;

        cout << prefix_sum[y] - prefix_sum[x - 1] << endl;
    }

    return 0;
}
