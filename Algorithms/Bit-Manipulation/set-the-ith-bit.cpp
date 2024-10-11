#include <iostream>
using namespace std;

int main()
{
    int n, pos;
    cin >> n >> pos;
    cout << "Before set: " << n << endl;
    n = n | (1 << pos);

    cout << "After Set: " << n << endl;
}