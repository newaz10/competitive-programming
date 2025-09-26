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

        vector<int> a(n);
        long long total = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total += a[i];
        }

        if (total == 0) {
            cout << "NO\n";
        } 
        else {
            cout << "YES\n";

            if (total > 0) {
                sort(a.rbegin(), a.rend()); 
            } 
            else {
                sort(a.begin(), a.end());   
            }

            for (int i = 0; i < n; i++) {
                cout << a[i] << " \n"[i == n-1];
            }
        }
    }

    return 0;
}