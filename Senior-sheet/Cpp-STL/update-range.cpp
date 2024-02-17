#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    // Read the array A
    vector<long long> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // Initialize an array to keep track of updates
    vector<long long> updates(N + 1, 0);

    // Process each query and update the update array
    for (int i = 0; i < Q; ++i) {
        int L, R;
        long long val;
        cin >> L >> R >> val;

        updates[L] += val;
        updates[R + 1] -= val;
    }

    // Apply the updates to the array A
    for (int i = 1; i <= N; ++i) {
        updates[i] += updates[i - 1];
        A[i - 1] += updates[i];
    }

    // Output the updated array
    for (int i = 0; i < N; ++i) {
        cout << A[i] << " ";
    }

    return 0;
}
