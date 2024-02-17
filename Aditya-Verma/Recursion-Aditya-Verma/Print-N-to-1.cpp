#include <iostream>
using namespace std;

void print(int n) // Hypothesis step it will print the numbers from n to 1
{
    if (n == 0) // Base case it will return
    {
        return;
    }

    cout << n << " "; // Induction step it will print the number n and call the function print(n-1) to print the numbers from n-1 to 1
    print(n - 1);
}

int main()
{
    int n;
    cin >> n;
    print(n);
}