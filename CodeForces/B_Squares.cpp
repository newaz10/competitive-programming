#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    if (k > n) {
        cout << -1 << '\n';
        return 0;
    }

    vector<int> a(n);

    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    cout << a[n - k] << " " << 0 << '\n';
    
    return 0;
}