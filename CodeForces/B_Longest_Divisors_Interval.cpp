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

        long long i = 1;
        
        while (n % i == 0) {
            i++;
        }

        cout << i - 1 << '\n';
    }

    return 0;
}