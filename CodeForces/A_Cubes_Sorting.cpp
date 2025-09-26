#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n); 

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool found = false;
        
        for (int i = 0; i < n - 1; i++) {
            if (a[i] <= a[i+1]) {
                found = true;
                break;
            }
        }

        cout << (found ? "YES" : "NO") << '\n';
    }

    return 0;
}