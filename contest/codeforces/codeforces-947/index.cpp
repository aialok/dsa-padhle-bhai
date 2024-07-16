#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool found = false;

        for (int i = 0; i < n; i++)
        {
            if (is_sorted(arr, arr + n))
            {
                cout << "YES" << endl;
                found = true;
                break;
            }
            else
            {
                rotate(arr, arr + 1, arr + n);
            }
        }

        if (!found)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}