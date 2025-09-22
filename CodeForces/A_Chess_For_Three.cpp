#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;

        if ((p1 + p2 + p3) % 2 != 0) {
            cout << "-1\n";
        } 
        else {
            cout << min({p1 + p2, p2 + p3, p3 + p1, (p1 + p2 + p3) / 2}) << '\n';
        }
    }

    return 0;
}