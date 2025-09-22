#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int m;
    cin >> m;

    vector<int> b(m);

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    double max_ratio = 0.0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (b[j] % a[i] == 0) {
                double ratio = (double) b[j] / a[i];
                if (ratio > max_ratio) {
                    max_ratio = ratio;
                }
            }
        }
    }

    int count = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (b[j] % a[i] == 0) {
                double ratio = (double) b[j] / a[i];
                if (abs(ratio - max_ratio) < 1e-9) {
                    count++;
                }
            }
        }
    }

    cout << count << '\n';

    return 0;
}