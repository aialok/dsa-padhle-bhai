// Binary Search Implementation

#include <iostream>
#include <vector>
using namespace std;

int lower_bound(const vector<int> &nums, int target)
{
    if (nums.empty() || target <= nums.front())
        return 0;
    if (target > nums.back())
        return nums.size();

    int left = 0;
    int right = nums.size() - 1;

    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }

    return left;
}

int main()
{
    vector<int> nums = {5, 6, 8, 9, 6, 5, 5, 6};
    int target = 1;
    int index = lower_bound(nums, target);

    if (index == -1)
    {
        cout << "Target not Found." << endl;
    }
    else
    {
        cout << "Target Found " << target << " Index " << index << endl;
    }

    return 0;
}
