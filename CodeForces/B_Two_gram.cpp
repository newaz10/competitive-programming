#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;

    cin >> n;
    cin >> s;

    map<string, int> freq;

    for (int i = 0; i < n - 1; i++) {
        string tg = s.substr(i, 2);
        freq[tg]++;
    }

    string best = "";
    int max_count = 0;

    for (auto p : freq) {
        if (p.second > max_count) {
            max_count = p.second;
            best = p.first;
        }
    }

    cout << best << '\n';

    return 0;
}