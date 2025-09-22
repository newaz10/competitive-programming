#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int zeros = 0, ones = 0;

    for (char c : s) {
        if (c == '0') zeros++;
        else ones++;
    }

    cout << abs(zeros - ones) << '\n';

    return 0;
}