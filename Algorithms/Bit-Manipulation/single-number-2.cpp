#include <bits/stdc++.h>

using namespace std;

// Brute Force Approach:
// TC : O(N)
// SC : O(N) ->  This is disadvantage we can solve it in O(1)
int brute(vector<int> &nums)
{
    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }

    for (auto x : mp)
    {
        if (x.second == 1)
        {
            return x.first;
        }
    }

    return -1;
}

// Time Complextity : O(32*N)
// Space Complexity : O(1)
int BettersingleNumberIIApproachI(vector<int> &nums)
{
    int ans = 0;
    int size = sizeof(nums[0]) * 8;
    for (int bitIndex = 0; bitIndex < size; bitIndex++)
    {
        int count = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] & (1 << bitIndex))
            {
                count++;
            }
        }

        if (count % 3 != 0)
        {
            ans = ans | (1 << bitIndex);
        }
    }

    return ans;
}

int BettersingleNumberIIApproachII(vector<int> &nums)
{
    // Variable to store size of array
    int n = nums.size();

    // Sorting the array
    sort(nums.begin(), nums.end());

    // Traversing the array
    for (int i = 1; i < nums.size(); i += 3)
    {
        /* Checking the elements
        in the bucket */
        if (nums[i] != nums[i - 1])
        {
            // Return the single number
            return nums[i - 1];
        }
    }

    /* If not found till now, then
    the last number will be single */
    return nums[n - 1];
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[i] = x;
    }

    // Better : 1
    cout << BettersingleNumberIIApproachI(arr) << endl;

    // Brute
    cout << brute(arr) << endl;

    // Better 2:
    cout << BettersingleNumberIIApproachII(arr) << endl;
    return 0;
}