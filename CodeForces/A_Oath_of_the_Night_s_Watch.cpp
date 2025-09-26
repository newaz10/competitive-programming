#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<long long> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long min_val = *min_element(a.begin(), a.end());
    long long max_val = *max_element(a.begin(), a.end());

    if (min_val == max_val) {
        cout << 0 << '\n';
        return 0;
    }

    int count = 0;
    
    for (long long x : a) {
        if (x > min_val && x < max_val) {
            count++;
        }
    }

    cout << count << '\n';

    return 0;
}