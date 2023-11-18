#include <iostream>
using namespace std;

int PrintFactorial(int n){ // Hyptothesisi step it will return the factorial of n // 5*4*3*2*1

        if(n==0 || n==1){ // Base case it will return 1
            return 1;
        }

        int factorial= n*PrintFactorial(n-1); // Induction step it will return the factorial of n-1 and multiply it with n and return the factorial of n  // 5*4*3*2*1
        return factorial; 



}

int main()
{
    int n;
    cin >> n;
   int factorial = PrintFactorial(n);
    cout<<factorial;
}