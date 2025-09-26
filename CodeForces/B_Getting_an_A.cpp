#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> grades(n);
    long long total = 0;

    for (int i = 0; i < n; i++) {
        cin >> grades[i];
        total += grades[i];
    }

    if (2 * total >= 9LL * n) {
        cout << 0 << '\n';
        return 0;
    }

    sort(grades.begin(), grades.end());

    int changes = 0;
    
    for (int i = 0; i < n; i++) {
        if (2 * total >= 9LL * n) break;
        total += (5 - grades[i]);
        changes++;
    }

    cout << changes << '\n';

    return 0;
}