#include <iostream>
#include <vector>

using namespace std;

int insert(vector<int> &arr, int n, int temp)
{ // Hypothesis step it will insert the temp at the correct position in the array
    if (n == 0 || arr[n - 1] <= temp)
    {
        arr.push_back(temp);
        return 0;
    }
    int val = arr[n - 1]; // Induction step it will store the last element of the array in val and call the function insert(arr,n-1,temp) to insert the temp at the correct position in the array
    arr.pop_back();
    insert(arr, n - 1, temp);
    arr.push_back(val); // Induction step it will push the val at the end of the array
    return 0;
}

int sortArray(vector<int> &arr, int n)
{
    if (n == 1)
    {
        return 0;
    }

    int temp = arr[n - 1];  // Induction step it will store the last element of the array in temp and call the function sortArray(arr,n-1) to sort the array from 0 to n-1
    arr.pop_back();
    sortArray(arr, n - 1); // Hypothesis step it will sort the array from 0 to n-1
    insert(arr, n - 1, temp); // Induction step it will insert the temp at the correct position in the array
    return 0; 
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    sortArray(arr, n);
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
}