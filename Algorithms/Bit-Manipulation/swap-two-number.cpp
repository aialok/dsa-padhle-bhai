#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    cout << "Before Swap A : " << a << endl;
    cout << "Before Swap B : " << b << endl;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "After Swap A : " << a << endl;
    cout << "After Swap B : " << b << endl;
}