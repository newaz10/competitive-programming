#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (n >= 0) {
        cout << n << '\n';
        return;
    }

    int case1 = n;
    int case2 = n / 10;
    int case3 = (n / 100) * 10 + n % 10;
    
    cout << max({case1, case2, case3}) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}