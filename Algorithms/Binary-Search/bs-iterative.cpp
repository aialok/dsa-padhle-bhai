// Binary Search Implementation

#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;

    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return -1;
}

int main()
{
    vector<int> nums = {10, 12, 23, 25, 33, 36, 46, 49, 50, 69};
    int target = 69;
    int index = binary_search(nums, target);

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
