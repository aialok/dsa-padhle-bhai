#include <iostream>
#include <algorithm>
#include <map>
#define int long long
using namespace std;

signed main()
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

        int count = 0 ;

        for (int i = 0; i < n-1; i++)
        {
            if(arr[i]!=arr[i+1]){
                count++;
            }
        }

        cout<<count<<endl;
        

    }

    return 0;
}