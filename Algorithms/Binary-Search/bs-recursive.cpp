// Binary Search Implementation

#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<int> &nums, int target, int start, int end)
{

    if (start <= end)
    {
        int mid = start + ((end - start) / 2);

        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > target)
            return binary_search(nums, target, start, mid - 1);
        else
            return binary_search(nums, target, mid + 1, end);
    }

    return -1;
}

int main()
{
    vector<int> nums = {10, 12, 23, 25, 33, 36, 46, 49, 50, 69};
    int target = 49;
    int index = binary_search(nums, target, 0, nums.size() - 1);

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
