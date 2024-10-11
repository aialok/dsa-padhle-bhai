#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if ((n & (n - 1)) == 0)
    {
        cout << "It is power of 2" << endl;
    }
    else
        cout << "Power of 1" << endl;
}