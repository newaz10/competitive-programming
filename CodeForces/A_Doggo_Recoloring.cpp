#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string s;
    cin >> s;

    if (n == 1) {
        cout << "Yes\n";
        return 0;
    }

    vector<int> freq(26, 0);

    for (char c : s) {
        freq[c - 'a']++;
    }

    bool possible = false;
    
    for (int count : freq) {
        if (count >= 2) {
            possible = true;
            break;
        }
    }

    cout << (possible ? "Yes" : "No") << '\n';

    return 0;
}