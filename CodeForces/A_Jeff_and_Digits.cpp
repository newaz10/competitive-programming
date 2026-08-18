#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    int count_5 = 0;
    int count_0 = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 5) {
            count_5++;
        } else if (x == 0) {
            count_0++;
        }
    }

    if (count_0 == 0) {
        cout << -1 << "\n";
    } else if (count_5 < 9) {
        cout << 0 << "\n";
    } else {
        int num_fives = (count_5 / 9) * 9;
        for (int i = 0; i < num_fives; i++) {
            cout << 5;
        }
        for (int i = 0; i < count_0; i++) {
            cout << 0;
        }
        cout << "\n";
    }

    return 0;
}