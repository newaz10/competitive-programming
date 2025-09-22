#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int days = 0;
    int socks = n;

    while (socks > 0) {
        days++;
        socks--;  

        if (days % m == 0) {
            socks++;
        }
    }

    cout << days << '\n';

    return 0;
}