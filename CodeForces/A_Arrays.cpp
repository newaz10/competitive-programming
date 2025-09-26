#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int nA, nB;
    cin >> nA >> nB;

    int k, m;
    cin >> k >> m;

    vector<long long> A(nA), B(nB);

    for (int i = 0; i < nA; i++) cin >> A[i];
    for (int i = 0; i < nB; i++) cin >> B[i];

    if (A[k - 1] < B[nB - m]) {
        cout << "YES\n";
    } 
    else {
        cout << "NO\n";
    }

    return 0;
}