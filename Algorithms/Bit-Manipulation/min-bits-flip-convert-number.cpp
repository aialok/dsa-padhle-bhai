#include <iostream>
#include <limits>

using namespace std;

int minBitsFlip(int start, int goal)
{
    int minBits = 0;

    int size = sizeof(start) * 8;
    // cout<<size<<endl;
    for (int i = 0; i < size; i++)
    {

        if (((start & (1 << i)) != 0 && ((goal & (1 << i)) == 0)) || ((start & (1 << i)) == 0 && ((goal & (1 << i)) != 0)))
        {
            minBits++;
        }
    }

    return minBits;
}

int main()
{
    int start, goal;
    cin >> start >> goal;

    cout << "Ans: " << minBitsFlip(start, goal) << endl;
}