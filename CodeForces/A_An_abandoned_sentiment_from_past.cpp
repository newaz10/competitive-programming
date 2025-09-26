#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> b(k);

    for (int i = 0; i < k; i++) {
        cin >> b[i];
    }

    sort(b.rbegin(), b.rend());

    vector<int> result = a;

    int idx = 0;

    for (int i = 0; i < n; i++) {
        if (result[i] == 0) {
            result[i] = b[idx++];
        }
    }

    bool is_increasing = true;

    for (int i = 0; i < n - 1; i++) {
        if (result[i] >= result[i + 1]) {
            is_increasing = false;
            break;
        }
    }

    if (is_increasing) {
        cout << "No\n";
    } 
    else {
        cout << "Yes\n";
    }

    return 0;
}