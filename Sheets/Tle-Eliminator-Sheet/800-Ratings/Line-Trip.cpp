#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int max_fuel = arr[0];

        for (int i = 0; i < n - 1; i++)
        {
            max_fuel = max(max_fuel, arr[i + 1] - arr[i]);
        }

        max_fuel = max(max_fuel, 2*(k-arr[n-1]));

        cout<<max_fuel<<endl;


    }

    return 0;
}