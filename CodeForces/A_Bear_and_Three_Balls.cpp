#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> t(n);

    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }

    sort(t.begin(), t.end());
    t.erase(unique(t.begin(), t.end()), t.end());

    for (int i = 0; i + 2 < t.size(); i++) {
        if (t[i+2] - t[i] <= 2) {
            cout << "YES" << '\n';
            return 0;
        }
    }

    cout << "NO" << '\n';
    
    return 0;
}