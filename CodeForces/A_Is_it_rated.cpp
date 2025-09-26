#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int, int>> v(n);
    bool changed = false;

    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
        if (v[i].first != v[i].second) {
            changed = true;
        }
    }

    if (changed) {
        cout << "rated\n";
        return 0;
    }

    bool non_increasing = true;

    for (int i = 1; i < n; i++) {
        if (v[i].first > v[i-1].first) {
            non_increasing = false;
            break;
        }
    }

    if (!non_increasing) {
        cout << "unrated\n";
    } 
    else {
        cout << "maybe\n";
    }

    return 0;
}