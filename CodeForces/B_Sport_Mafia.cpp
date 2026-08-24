#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k;
    if (!(cin >> n >> k)) return 0;

    long long discriminant = 9 + 8 * (n + k);
    long long sqrt_d = round(sqrt(discriminant));
    long long x = (-3 + sqrt_d) / 2;

    long long eaten = n - x;
    cout << eaten << "\n";

    return 0;
}