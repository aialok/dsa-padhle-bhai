// Recently, the first-year student Maxim learned about the Collatz conjecture, but he didn't pay much attention during the lecture, so he believes that the following process is mentioned in the conjecture:

// There is a variable x
//  and a constant y
// . The following operation is performed k
//  times:

// increase x
//  by 1
// , then
// while the number x
//  is divisible by y
// , divide it by y
// .
// Note that both of these actions are performed sequentially within one operation.
// For example, if the number x=16
// , y=3
// , and k=2
// , then after one operation x
//  becomes 17
// , and after another operation x
//  becomes 2
// , because after adding one, x=18
//  is divisible by 3
//  twice.

// Given the initial values of x
// , y
// , and k
// , Maxim wants to know what is the final value of x
// .

// Input
// Each test consists of multiple test cases. The first line contains an integer t
//  (1≤t≤104
// ) — the number of test cases. Then follows the description of the test cases.

// The only line of each test case contains three integers x
// , y
// , and k
//  (1≤x,k≤109
// , 2≤y≤109
// ) — the initial variable, constant and the number of operations.

// Output
// For each test case, output a single integer — the number obtained after applying k
//  operations.

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;
        
        if (y == 1) {
            cout << x + k << '\n';
            continue;
        }
        
        long long r = x % y;
        if (r != 0) {
            long long s = min(k, y - r);
            x += s;
            k -= s;
        }
        
        if (k > 0) {
            long long cycles = k / (y - 1);
            k %= y - 1;
            while (x % y == 0 && cycles > 0) {
                x /= y;
                cycles--;
            }
            x += k;
        }
        
        cout << x << '\n';
    }
    
    return 0;
}