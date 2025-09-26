#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> idx(n);
    iota(idx.begin(), idx.end(), 0);

    sort(idx.begin(), idx.end(), [&](int i, int j) {
        return a[i] > a[j];
    });

    long long total = 0;
    
    for (int x = 0; x < n; x++) {
        total += 1LL * a[idx[x]] * x + 1;
    }

    cout << total << '\n';
    for (int i = 0; i < n; i++) {
        cout << idx[i] + 1 << " \n"[i == n-1];
    }

    return 0;
}