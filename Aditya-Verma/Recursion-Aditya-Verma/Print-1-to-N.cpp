#include <iostream>
using namespace std;

void print(int n)  // Hypothesis step it will print the numbers from 1 to n
{
    if (n == 0) // Base case it will return
    {
        return;
    }

    print(n - 1);  // hypothesis step it will print the numbers from 1 to n-1
    cout << n << " ";  // Induction step it will print the number n
}

int main()
{
    int n;
    cin >> n;
    print(n);
}