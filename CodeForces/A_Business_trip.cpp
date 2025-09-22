#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;

    vector<int> a(12);
    for (int i = 0; i < 12; i++) {
        cin >> a[i];
    }

    if (k == 0) {
        cout << 0 << '\n';
        return 0;
    }

    sort(a.rbegin(), a.rend());

    int total = 0;
    int months = 0;

    for (int i = 0; i < 12; i++) {
        total += a[i];
        months++;

        if (total >= k) {
            cout << months << '\n';
            return 0;
        }
    }

    cout << -1 << '\n';

    return 0;
}