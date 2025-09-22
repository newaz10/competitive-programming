#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    cin >> s >> t;

    int n = s.size(), m = t.size();
    int i = n - 1, j = m - 1;

    while (i >= 0 && j >= 0 && s[i] == t[j]) {
        i--;
        j--;
    }

    cout << i + 1 + j + 1 << '\n';

    return 0;
}