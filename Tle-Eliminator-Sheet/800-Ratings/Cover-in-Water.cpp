#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int count = 0;
        int gap = 0;

        for (int i = 0; i < s.length(); i++)
        {

            if (s[i] == '.')
            {
                ++gap;
            }
            else
            {
                if (gap != 0)
                {
                    count = count + gap;
                    gap = 0;
                }
            }

            if (gap > 2)
            {
                count = 2;
                gap = 0;
                break;
            }
        }

        if (gap != 0)
        {
            count = count + gap;
        }

        cout << count << endl;
    }

    return 0;
}