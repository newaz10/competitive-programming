#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    vector<int> p(n + 1);
    
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }

    for (int start = 1; start <= n; start++) {
        vector<bool> visited(n + 1, false);
        int curr = start;

        while (!visited[curr]) {
            visited[curr] = true;
            curr = p[curr];
        }

        cout << curr << (start == n ? "" : " ");
    }
    cout << "\n";

    return 0;
}