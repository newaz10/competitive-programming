#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    map<char, int> freq;

    for (char c : s) {
        freq[c]++;
    }

    for (auto &p : freq) {
        if (p.second > k) {
            cout << "NO" << '\n';
            return 0;
        }
    }

    cout << "YES" << '\n';
    
    return 0;
}