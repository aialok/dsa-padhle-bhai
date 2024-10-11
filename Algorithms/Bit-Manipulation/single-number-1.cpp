// Given an array of nums of n integers. Every integer in the array appears twice except one integer. Find the number that appeared once in the array.

#include <bits/stdc++.h>

using namespace std;

int singleNumber(vector<int> &nums)
{   int ans = nums[0];
    for(int i=1;i<nums.size();i++){
        ans = nums[i]^ans;
    }

    return ans;
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

    cout << singleNumber(arr) << endl;
}