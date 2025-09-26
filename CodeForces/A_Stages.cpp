#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    sort(s.begin(), s.end());

    int count = 0;
    long long total_weight = 0;
    char last = 0; 

    for (char c : s) {
        if (count == k) break;

        if (count == 0 || c >= last + 2) {
            total_weight += (c - 'a' + 1);
            last = c;
            count++;
        }
    }

    if (count == k) {
        cout << total_weight << '\n';
    } 
    else {
        cout << -1 << '\n';
    }

    return 0;
}