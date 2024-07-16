#include <iostream>
using namespace std;

void solve() {
    long long x, y, k;
    cin >> x >> y >> k;

    while (k > 0) {
        x++;
        if (x % y == 0) {
            long long new_x = x;
            while (new_x % y == 0) {
                new_x /= y;
            }
            k -= (x - new_x) / (y - 1) + 1;
            x = new_x;
        } else {
            k--;
        }
    }

    cout << x << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}