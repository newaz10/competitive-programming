#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(long long x) {
    if (x < 0) return false; 

    long long root = (long long)round(sqrt(x));
    return (root * root == x);
}

int main() {
    int n;
    cin >> n;

    vector<long long> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.rbegin(), a.rend());

    for (int i = 0; i < n; i++) {
        if (!isPerfectSquare(a[i])) {
            cout << a[i] << '\n';
            return 0; 
        }
    }

    return 0;
}