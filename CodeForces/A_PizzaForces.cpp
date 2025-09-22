#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        if (n <= 6) {
            cout << 15 << '\n';
        } 
        else if (n <= 8) {
            cout << 20 << '\n';
        } 
        else if (n <= 10) {
            cout << 25 << '\n';
        } 
        else {
            long long pizzas = (n + 1) / 2;
            cout << pizzas * 5 << '\n';
        }
    }

    return 0;
}