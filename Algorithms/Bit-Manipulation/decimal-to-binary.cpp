#include <iostream>

using namespace std;

string function (int n) {
    string binary = "";
    while (n > 0) {
        binary = to_string(n % 2) + binary;
        n /= 2;
    }
    return binary;
}

int main(){
    int n;
    cin >> n;
    cout << function(n) << endl;
    return 0;
}