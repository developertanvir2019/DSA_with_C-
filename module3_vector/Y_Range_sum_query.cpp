#include <bits/stdc++.h>
using namespace std;

int main (){
    int n, q;
    cin >> n >> q;
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    // Step 1: Create and compute the prefix sum array
    vector<long long> prefix_sum(n + 1, 0); // Using long long for large sums
    for(int i = 0; i < n; i++){
        prefix_sum[i + 1] = prefix_sum[i] + A[i];
    }

    // Step 2: Answer each query using the prefix sum array
    int l, r;
    for(int i = 0; i < q; i++){
        cin >> l >> r;
        long long sum = prefix_sum[r] - prefix_sum[l - 1];
        cout << sum << endl;
    }

    return 0;
}
