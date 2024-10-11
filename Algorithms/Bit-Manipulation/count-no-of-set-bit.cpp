#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    // other way
    // for (int i = 0; i < 32; i++)
    // {
    //     if ((n & (1 << i)))
    //     {
    //         count++;
    //     }
    // }

    while(n>0){
        count+=n&1;

        n>>=1;
    }

    cout << count << endl;
}