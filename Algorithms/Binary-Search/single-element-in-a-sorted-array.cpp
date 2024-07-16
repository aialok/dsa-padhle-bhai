#include <iostream>
#include <vector>
using namespace std;

int singleNonDuplicate(const vector<int> &arr)
{
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] != arr[mid + 1] && arr[mid] != arr[mid - 1])
        {
            return arr[mid];
        }
        else if(arr[mid]==arr[mid-1] && (mid-1-left)%2==1) {
            right = mid-1;
        }
        else if(arr[mid==arr[mid+1] && (right-mid]%2==1){
            left = mid+1;
        }
    }

    return -1;
}

int main()
{
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    int singleElement = singleNonDuplicate(nums);

    cout << singleElement << endl;

    return 0;
}
