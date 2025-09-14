#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end()); // ascending: smallest (most negative) first

    int earn = 0;
    int taken = 0;

    for (int i = 0; i < n && taken < m; i++) {
        if (a[i] > 0) break; // taking this would reduce earning
        earn += -a[i];       // Bob earns -a[i] by taking it
        taken++;
    }

    cout << earn << "\n";

    return 0;
}