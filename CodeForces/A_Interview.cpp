#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long totalA = 0, totalB = 0;
    long long x;

    for (int i = 0; i < n; i++) {
        cin >> x;
        totalA |= x;
    }

    for (int i = 0; i < n; i++) {
        cin >> x;
        totalB |= x;
    }

    cout << totalA + totalB << '\n';

    return 0;
}