#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, cnt = 0;
    cin >> a >> b;

    while(a > 0 && b > 0) {
        if(a < b) {
            swap(a, b);
        }

        cnt += a/b;
        a %= b;
    }

    cout << cnt << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    

    return 0;
}