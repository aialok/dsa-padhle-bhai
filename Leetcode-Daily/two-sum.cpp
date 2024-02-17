#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{

    vector<pair<int, int>> v(nums.size());

    for (int i = 0; i < nums.size(); ++i)
    {
        v[i].first = nums[i];
        v[i].second = i;
    }

    sort(v.begin(), v.end());

    for (auto x : v)
    {
        cout << x.first << " " << x.second << endl;
    }

    int i = 0;
    int j = nums.size() - 1;
    vector<int> vp;
    while (i < j)
    {
        if (v[i].first + v[j].second == target)
        {
            vp.push_back(v[i].second);
            vp.push_back(v[j].second);
            return vp;
        }
        else if (v[i].first + v[j].second > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    return vp;
}

int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[i] = x;
    }

    twoSum(v, target);
}
