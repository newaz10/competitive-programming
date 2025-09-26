#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    long long ans = 0;
    
    for (int i = 0; i < n / 2; i++) {
        long long s = a[i] + a[n - 1 - i];
        ans += s * s;
    }

    cout << ans << '\n';

    return 0;
}